//------------ 1st approach ------------------//
// after sorting the element at n/2'th position will be the most occuring element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//----------- 2nd Approach (Hash Map) -----------------//
// store the count of each element in a Hash Map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int n = nums.size();
        for(auto x:mp) {
            if(x.second > n/2) {
                return x.first;
            }
        }
        return 0;
    }
};

//---------------- Best Approach (Moore's Voting Algorithm) -----------------//
// Moore Voting Algorithm - The algorithm works on the basis of the assumption that the majority element occurs more 
// than n/2 times in the array. This assumption guarantees that even if the count is reset to 0 by other elements, 
// the majority element will eventually regain the lead.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0, candidate = 0;
       for(int i=0; i<nums.size(); i++) {
           if(count == 0) {
               candidate = nums[i];
               count++;
           }
           else if(nums[i] == candidate) {
               count++;
           }
           else if(nums[i] != candidate) {
               count--;
           }
       }
       return candidate;
    }
};
