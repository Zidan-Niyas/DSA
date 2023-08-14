#include <bits/stdc++.h>
using namespace std;

// Using Maps for charachter hashing
int main() {
    string s;
    cout << "Enter String : ";
    cin >> s;
    
    map<char,int> mpp;
    for(int i=0; i<s.size(); i++) {
        mpp[s[i]]++;
    }
    
    for(auto it : mpp) {
        cout << it.first << "-->" << it.second << endl;
    }
    
    int q;
    cout << "Enter number of queries : ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter charachter to check : ";
        cin >> c;
        cout << c << " occurs " << mpp[c] << " times. " << endl;
    }

    return 0;
}


/*
INPUT :-
Enter String : zidanniyas

OUTPUT :-
a-->2
d-->1
i-->2
n-->2
s-->1
y-->1
z-->1
Enter number of queries : 3
Enter charachter to check : i
i occurs 2 times. 
Enter charachter to check : z
z occurs 1 times. 
Enter charachter to check : n
n occurs 2 times. 
*/
