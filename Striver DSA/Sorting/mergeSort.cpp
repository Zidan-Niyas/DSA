// Merge Sort (LOGIC) ---> Divide & Merge
// Time Complexity = O(N*logN) ---> Best, Worst & Average Case  


void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    // Left part of divided array : low....mid
    // Right part of divided array : mid+1....high
    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // For the remaining part
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    // Putting the temporary array to the original array
    for(int i=low; i<=high; i++) {
        arr[i] = temp[i - low];
    }
}


void mSort(vector<int> &arr, int low, int high){
    if(low >= high) {
        return;
    }
    int mid = (low+high)/2;
    mSort(arr,low,mid);
    mSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void mergeSort(vector<int>& arr, int l, int r) {
    mSort(arr,l,r);
}




