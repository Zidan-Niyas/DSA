//--------------------- Brute Force -----------------------//
// TC : O(N^2) , SC : O(N) ---> Selection Sort
// We can also use 'Merge Sort' as brute force approach whose TC = O(nlogn)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            for(int j=i; j<nums.size(); j++) {
                if(nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};

//-------------------- Another Approach (counting) ------------------- //
// TC : O(N) , SC : O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, twos = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                zeros++;
            }
            else if(nums[i] == 1) {
                ones++;
            }
            else if(nums[i] == 2) {
                twos++;
            }
        }
        int k = 0;
        while(zeros > 0) {
            nums[k] = 0;
            zeros--;
            k++;
        }
        while(ones > 0) {
            nums[k] = 1;
            ones--;
            k++;
        }
        while(twos > 0) {
            nums[k] = 2;
            twos--;
            k++;
        }
    }
};

//------------ BEST APPROACH (Dutch National Flag Algorithm) -----------------//
// Dutch National Flag Algorithm - 3 
// [0 ... low-1] --> 0 (extreme left)
// [low .... mid-1] --> 1
// [mid .... high] --> the array to be sorted
// [high+1 .... n-1] --> 2 (extreme right)

