// Approach : use two pointers, one slow and another fast.The fast pointer iterates through the array and checks for elements that are not equal,
// and if not equal the slow pointer is incremented. Finally the value of slow pointer is the length of array without duplicates

int removeDuplicates(vector<int> &arr, int n) {
	// 1st pointer (slow)
	int i = 0;

	// 2nd pointer (fast)
	for(int j=1; j<n; j++) {
		if(arr[j] != arr[j-1]) {
			arr[i] = arr[j];
			i++;
		}
	}
	
	return i+1;
}
