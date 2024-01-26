// ---------Efficient Approach(review)------------- //
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // nums = [1 2 3 4 5 6 7] , n=7 , k=3
        k=k%nums.size();
        // Reverse values from 0 --> n-k  = [4 3 2 1 | 5 6 7]
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        // Reverse values from n-k --> end  = [4 3 2 1 | 7 6 5]
        reverse(nums.begin()+(nums.size()-k),nums.end());

        // Reverse whole array  = [5 6 7 | 1 2 3 4]
        reverse(nums.begin(),nums.end());
    }
};


// ----------My Approach (passes 28/38 cases) ------------ //
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      // nums = [1 2 3 4 | 5 6 7] , k=3
        int j=0;
        int temp[100000],newArr[100000];
        // Reversing the whole array = [7 6 5 | 4 3 2 1]
        for(int i=nums.size()-1; i>=0; i--) {
            temp[j] = nums[i];
            j++;
        }
        // Reversing before pivot = [5 6 7 | 4 3 2 1]
        j=0;
        for(int i=k-1; i>=0; i--) {
            newArr[j] = temp[i]; 
            j++;   
        }
        // Reversing after pivot = [5 6 7 | 1 2 3 4]
        for(int i=nums.size()-1; i>=k; i--) {
            newArr[j] = temp[i];
            j++;
        }
        // Copying reversed values to original array
        for(int i=0; i<nums.size(); i++) {
            nums[i] = newArr[i];
        }
    }
};
