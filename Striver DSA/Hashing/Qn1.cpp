// Problem Statement : you are given an array of length n with values from 1 to 'x' . Count the frequency of all the elements from 1 to 'n'.

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> ans;
    int hash[100000] = {0};
    for(int i=0; i<n; i++) {
        hash[nums[i]-1]++;
    }
    for(int i=0; i<n; i++) {
        ans.push_back(hash[i]);
    }
    return ans;
}
