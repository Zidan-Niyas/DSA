// Selection Sort ---> Select minimum (logic)
// Time Complexity ---> O(N^2) --> Best, Worst & Average Case


void swap(int i, int j, vector<int> &arr) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    for(int i=0; i<n-1; i++) {
        for(int j=i; j<n; j++) {
          if (arr[j] < arr[i]) {
            swap(i, j, arr);
          }
        }
    }
}
