//---------------- Brute Force (passes 205/210 test cases) --------------------//
// TC = O(N^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                if(sum > max) {
                    max = sum;
                }
            }
        }
        return max;
    }
};

//------------------------- Kadane's Algorithm ----------------------//
// TC = O(N)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, max = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > max) {
                max = sum;
                int ansStart = start;            // to print the subarray, start is from when sum = 0
                int ansEnd = i;                  // end is the index when sum > max
            }
            if(sum < 0) {                // Most important part of Kadane's Algorithm
                sum = 0;                   
                start = i;                // starting point of subarray
            }  
        }
        // To print the elements of maximum subarray
        for(int i = ansStart; i < ansEnd; i++) {
            cout << nums[i];
        }
        return max;
    }
};
