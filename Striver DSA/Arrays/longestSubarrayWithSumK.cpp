//--------------- Brute Force ------------------//
// TC = O(N^2)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(), maxLength = 0;
    for(int i=0; i<n; i++) { 
        long long sum = 0;
        for(int j=i; j<n; j++) {
                sum = sum + a[j];
                if(sum == k) {
                    maxLength = max(maxLength,j-i+1);
                }
            }
        }
    return maxLength;
}
