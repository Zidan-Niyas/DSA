// Bubble Sort (Logic) ---> Push the largest element to the last using adjacent swapping
// Time Complexity = O(N^2) ---> Worst & Average Case
// Time Complexity = O(N) ---> Best Case (Already sorted array)

void bubbleSort(int arr[], int n) 
{
    int didSwap = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) { 
                didSwap = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(didSwap == 0) break;   // Best Case ---> TC = 0(N) 
        }
    }
}
