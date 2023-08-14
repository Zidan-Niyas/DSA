#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[13],n,q,num;
    
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter values of array : " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // Mapping
    map<int,int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    
    // Iterating in the map
    for(auto it : mpp) {
        cout << it.first << "-->" << it.second << endl;
    }
    
    //Checking
    cout << "Enter no. of queries : ";
    cin >> q;
    while(q--) {
        cout << "Enter no. to be checked : ";
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}
