//--------------- Two Pointer Approach(time limit exceeded) ------------------//
// TC = O(N^2)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), maxLength = 0;
    for(int i=0; i<n; i++) { 
        long long sum = 0;
        int len = 0;
        for(int j=i; j<n; j++) {
                sum = sum + a[j];
                len++;
                if(sum == k && len > maxLen) {
                    maxLength = len;
                }
            }
        }
    return maxLength;
}

//-------------- HashMap Approach --------------------//
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), maxLen = 0;
    long long sum = 0;
    map<long long, int> preMap;
    for(int i=0; i<n; i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum - k;
        if(preMap.find(rem) != preMap.end()) {    // checking if remainder is present in the Hashmap
            int len = i - preMap[rem];            // if present, length of subarray is length of end minus the remainder index
            maxLen = max(maxLen,len);
        }
        // if k=3 & arr = [2,0,0,0,3] ---> max subarray should be [0,0,0,3] whose maxLen = 4 , if the below condition
        // is not used the max subarray will be [3] making maxLen = 1 which is wrong.
        if(preMap.find(sum) == preMap.end()) {     // Check if the key 'sum' is not present in the map 'preMap'
            preMap[sum] = i;                       // If not present, add a new key-value pair to the map where the key is 'sum' and the value is 'i'
        }
    }
    return maxLen;
}
