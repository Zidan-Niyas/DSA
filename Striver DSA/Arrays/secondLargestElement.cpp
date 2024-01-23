// BRUTE FORCE
vector<int> getSecondOrderElements(int n, vector<int> arr) {
  sort(arr.begin(), arr.end());
  return {arr[n-2], arr[1]};
}


// ---------------------------------------------------------------------------------------------------------------------------------- // 
// BETTER APPROACH --> 2 sweeps
int secondLargest(int n,vector<int> &arr) {
    int largest = arr[0];
    int slargest = -1;
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(i=0; i<n; i++) {
        if(arr[i] > slargest && arr[i] != largest ){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int n,vector<int> &arr) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    for(i=0; i<n; i++) {
        if(arr[i] < ssmallest && arr[i] != smallest ){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int slargest = secondLargest(n,arr);
    int ssmallest = secondSmallest(n,arr);
    return {slargest,ssmallest};
}


// -------------------------------------------------------------------------------------------------------------------------- //
// BEST APPROACH --> single sweep
int secondLargest(int n,vector<int> &arr) {
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int n,vector<int> &arr) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    int i;
    for (i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int slargest = secondLargest(n,arr);
    int ssmallest = secondSmallest(n,arr);
    return {slargest,ssmallest};
}
