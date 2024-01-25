// -------- My Approach (solved in 7 mins) ----------- //
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int val = arr[0];
    arr.erase(arr.begin()+0);
    arr.push_back(val);
    return arr;
}

// -------- Alternative Approach -------------- //
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int val = arr[0];
    for(int i=0; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = val;
    return arr;
}

