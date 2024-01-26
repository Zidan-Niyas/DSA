// ------------My Approach(solved in 5 mins)--------------- //
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros=0,j=0;
        int newArr[100000];
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                zeros++;
            }
            else {
                newArr[j] = nums[i];
                j++;
            }
        }
        for(int i=1; i<=zeros; i++) {
            newArr[j++] = 0;
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i] = newArr[i];
        }

    }
};
