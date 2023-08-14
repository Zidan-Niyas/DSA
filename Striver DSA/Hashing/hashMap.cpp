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


/* 
Input :-
Enter size of array : 7
Enter values of array : 
1 2 3 3 2 1 12 

Output :-
1-->2
2-->2
3-->2
12-->1
Enter no. of queries : 4
Enter no. to be checked : 1
2
Enter no. to be checked : 2
2
Enter no. to be checked : 3
2
Enter no. to be checked : 12
1
*/
