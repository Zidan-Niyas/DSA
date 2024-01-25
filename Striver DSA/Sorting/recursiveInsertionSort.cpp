// Approach : Normal insertion sort but we choose the element to start checking from recursively by incrementing 'i' each time, so that the array is sorted till the ith element after each recursion. 

void insertionSortHelper(int arr[], int n, int i)
{
    if(i == n) return;  // Base Case (once the array is sorted till the last element, stop)
  
    int j=i;
    while(j>0 && arr[j-1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertionSortHelper(arr,n,i+1);
}
