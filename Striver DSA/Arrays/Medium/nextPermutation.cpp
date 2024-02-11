//------------------- Tough Question (revise the intuition properly) -----------------------//
// Step 1 : Find the pivot point where a[i] < a[i+1]
// Step 2 : If the pivot point does not exist, it means that the array is at its maximum and next permutation is its reverse
// Step 3 : Check the values from pivot index to the end of array to find the 'next' element greater than the pivot element and swap
// Step 4 : After swapping, the values after pivot are in descending order.To get the next smallest value reverse this
// Finally we get the next permutation of giver array
// Eg : nums = [1,2,3] ---> o/p = [1,3,2]  (Pivot element is 2)
// Eg : nums = [3,2,1] ---> o/p = [1,2,3]  (No pivot element as it is the last permutation, so reverse the array)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        int flag = 0;
      // Finding pivot element
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] < nums[i+1]) {
                ind = i;
                break;
            }
        }
      // If no pivot element, it is the maximum permutation, so reverse the array
        if(ind == -1) {
            reverse(nums.begin(), nums.end());
            flag = 1;
        }
      // Finding the next smallest element to swap with the pivot element
        if(flag == 0) {
        for(int i = n-1; i > ind; i--) {
            if(nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        } 
      // Reverse the values after pivot to get the smallest possible value as the next permutation
        reverse(nums.begin() + ind + 1, nums.end());
        }
    }
};
