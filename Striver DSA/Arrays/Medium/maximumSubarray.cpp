//---------------- Brute Force (passes 205/210 test cases) --------------------//
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        for(int i = 0; i < n; i++) {
            int sum = nums[i];
            if(sum > max) {
                    max = sum;
                }
            for(int j = i+1; j < n; j++) {
                if(j < n) {
                sum += nums[j];
                if(sum > max) {
                    max = sum;
                }
                }
            }
        }
        return max;
    }
};
