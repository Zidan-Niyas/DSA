// Solution (CNS) : XOR of each element till the end of array will give the array that appears once
// XOR of two same numbers is 0
// so 5^4^5^4^1^2^2 = 1 
// 5^4^5^4 = 0
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++) {
            nums[i+1] = nums[i]^nums[i+1];
        }
        
        return nums[n-1];
    }
};


//------Frequency Approach(unordered_map)-----------------//
class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size(); // taking the size of the array 
        
        unordered_map<int, int> mp; // unordered map to store the frequency
        
        // storing frequency in the map
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        int ans; // variable to store our answer
        for(auto x: mp) // traverse from the map
        {
            if(x.second == 1) //if frequency of any elemennt is 1
            {
                ans = x.first; // store in our answer
                break; // break the loop, as we got our answer now
            }
        }
        return ans; // return ans
    }
};
