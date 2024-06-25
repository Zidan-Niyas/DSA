// QUICK SORT - DIVIDE & CONQUER STRATEGY
// Time Complexity = O(nlogn)
// Space Complexity = O(1)

// What is the PIVOT ELEMENT ? ==> the element in the array where all the elements to the left of it are less than it and to the right of it is more than it (it is in 
// the correct position with respect to the remaining elements).

/*  
How to partition the array and find the pivot index ? 
   "Our aim is to bring all elements less than pivot to the left and all elements greater than pivot to the right of the pivot element."
	- Choose pivot as the first element (or start of the array)
 	- initialize i = start and j = end
  	- Increment i till you find an element greater than pivot (arr[i] > pivot)
   	- Decrement j till you find an element less than pivot (arr[j] < pivot)
    	- Swap arr[i] and arr[j]
     	- Continue Steps 2 to 5 till i >= j
      	- Then, j will be the pivot index. So swap pivot element with arr[j]
       	- Return the pivot index to partition the array to left and right parts (as the pivot element is now in the correct position)
*/

int partitionArray(int arr[], int start, int end) {
	int pivot = arr[start];
	int i = start;
	int j = end;
	while(i < j) {
		while(arr[i] <= pivot && i <= end - 1) {
			i++;
		}
		while(arr[j] > pivot && j >= start + 1) {
			j--;
		}
		if(i < j) {
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[start], arr[j]);
	return j;
}

void quickSort(int arr[], int start, int end) {
	if(start < end) {
		int pIndex = partitionArray(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}
