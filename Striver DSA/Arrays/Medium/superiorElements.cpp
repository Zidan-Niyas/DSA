//--------------- Optimal Solution --------------------//
// TC = O(N) , SC = O(N)
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;    // SC = O(N)
    int n = a.size();
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--) {     // TC = O(N)
        if(a[i] > maxi) {
            ans.push_back(a[i]);
        }
        maxi = max(a[i], maxi);
    }
    return ans;



//-------------------- Brute Force --------------------//
// TC = O(N^2) ,  SC = O(N)
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int n = a.size();
    for(int i=0; i<a.size(); i++) {
        int flag = 0;
        for(int j=i+1; j<a.size(); j++) {
            if(a[i] < a[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            ans.push_back(a[i]);
        }
    }
    return ans;
}

