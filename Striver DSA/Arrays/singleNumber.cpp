// XOR of two same numbers is 0
// so 5^4^5^4^1^2^2 = 1   
// 5^4^5^4 = 0

//------- XOR solution (beats 96.12% solutions) --------------//
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


//------ Hashmap (beats 52.54% solutions) -----------------//
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;
        unordered_map<int,int> elements;
        for(int i=0; i<n; i++) {
            elements[nums[i]]++;
        }
        for(auto it : elements) {
            if(it.second == 1) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};
