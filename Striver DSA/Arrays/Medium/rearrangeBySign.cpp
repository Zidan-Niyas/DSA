//------------------ Brute Force (solved in 7 mins) -----------------------//
// TC : O(N)
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> newArr;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        int i = 0;
        while(i < (nums.size()/2)) {
            newArr.push_back(pos[i]);
            newArr.push_back(neg[i]);
            i++;
        }
        return newArr;
    }
