// Insertion Sort (LOGIC) ---> Insert the element at the correct position at every iteration
// Time Complexity = O(N^2) ---> Worst & Average Case
// Time Complexity = O(N) ---> Best Case (already sorted array)

void insertionSort(int n, vector<int> &arr){
    
    for(int i=0; i<=n-1; i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {   // If already sorted array ,this loop wont run --> BEST CASE --> TC = O(N)
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp; 
            j--;
        }
    }
}
