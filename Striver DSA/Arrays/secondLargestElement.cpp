class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int largest = INT_MIN;
	    int sLargest = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] > largest) {
	            sLargest = largest;
	            largest = arr[i];
	        }
	        else if (arr[i] > sLargest && arr[i] < largest) {
	            sLargest = arr[i];
	        }
	    }
	    if(sLargest == INT_MIN) return -1;      // If second largest element doesnt exist (all elements are same)
	    return sLargest;
	}
};
