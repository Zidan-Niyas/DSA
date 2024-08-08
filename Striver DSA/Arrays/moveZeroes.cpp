class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }
        int remaining = n-k;
        while(remaining > 0) {
            nums[k++] = 0;
            remaining--;
        }
    }
};
