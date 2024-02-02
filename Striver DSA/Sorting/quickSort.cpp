// TC = O(NlogN)
// SC = O(1)
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
