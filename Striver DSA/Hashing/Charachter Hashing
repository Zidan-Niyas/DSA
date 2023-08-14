// Only lowercase letters
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string : ";
    cin >> s;
    int hash[26] = {0};
    // Assigning values by hashing
    for(int i=0; i<s.size(); i++) {
        hash[s[i]-'a']++;
    }
    
    int q;  // Queries
    cout <<endl << "Enter queries : ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter charachter : ";
        cin >> c;
        cout << hash[c-'a'] << endl;
    }
    return 0;
}



// All charachters (lower and uppercase)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string : ";
    cin >> s;
    int hash[256] = {0};
    // Assigning values by hashing
    for(int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }
    
    int q;  // Queries
    cout <<endl << "Enter queries : ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter charachter : ";
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}
