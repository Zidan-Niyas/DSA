// Leetcode Problem : 268
// Solved in 10 mins (easy)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n; i++) {
            int flag = 0;
            for(int j=0; j<n; j++) {
                if(i == nums[j]) {
                    flag = 1;
                }
            }
            if(flag == 0) {
                return i;
            }
        }
        return 0;
    }
};


// ---------------------Optimised Approach ----------------------------- //
// Difference between the sum of the first n natural numbers and the sum of the array provided will give the missing no.
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;  
        int tempSum = 0;
        for(int i=0; i<n; i++) {
            tempSum += nums[i];
        }
        return sum - tempSum;
    }
};
