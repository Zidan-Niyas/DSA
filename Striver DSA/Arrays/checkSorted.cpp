class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] > nums[(i+1)%n]) {
                count++;
            }
        }
        return count <= 1;
    }
};

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------
LOGIC : 
- We loop through each element in the array using for(int i=0; i<n; i++).
- For each element nums[i], we compare it with the next element nums[(i+1)%n]. The use of (i+1)%n ensures that we wrap around to the beginning of the array when i is at the last element (circular comparison).
- If nums[i] is greater than nums[(i+1)%n], it means the order is not increasing at this point, so we increment count.
- After the loop, we check if count is less than or equal to 1.
- If count is 0 or 1, it means the array was originally sorted in increasing order and was rotated some number of positions (including zero rotations).
- If count is more than 1, it means there are multiple points where the order breaks, indicating that the array is not a rotated version of a sorted array.

KEY POINTS TO UNDERSTAND :- 
- Circular Comparison: Using (i+1)%n allows us to compare the last element with the first element, making it easy to handle the rotation.
- Count Increment: The count variable helps us determine the number of disruptions in the sorted order.
- Final Check: The condition count <= 1 ensures that there is at most one point where the order breaks, which is a characteristic of a rotated sorted array.
*/ -------------------------------------------------------------------------------------------------------------------------------------------------------------------
