// Easy problem to solve.But only passed 30/42 cases with my code.Had to make a minor tweak (relocate the line of code
// to find the max into the IF loop, initially i had it in the else loop which didnt pass some of the cases)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxOnes = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                maxOnes = max(maxOnes, count);   // this line in the else loop caused some of the edge cases to fail
            }
            else {
                count = 0;
            }
        }
        return maxOnes;
    }
};
