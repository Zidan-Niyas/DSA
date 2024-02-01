//------------------ Brute Force (solved in 6 mins) ---------------//
// TC : O(N^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if(sum == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
    return ans;
    }
};

//---------------- Optimized (two pass Hash Table) ---------------------//
// TC : O(N) , SC : O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if(mp.find(complement) == mp.end()) 
                mp[nums[i]] = i;        // if complement not present in the map, add the element and index to the map
            else 
                return {mp[complement], i};   // if complement is present, index of complement and current value index is the answer
            
        }
        return {-1,-1};
    }
};

//--------------- Optimized (one pas Hash Table) --------------------//
// TC : O(N) , SC : O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if(mp.count(complement)) {      // count function counts the number of times complement occurs and returns
                return {mp[complement], i}; // 1 if it exists and 0 if it does not. So if complement exists return.
            }
            else {
                mp[nums[i]] = i;
            }
        }
        return {-1,-1};    // if two numbers with sum = target doesnt exist return -1,-1
    }
};
