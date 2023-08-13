#include <iostream>
using namespace std;

int main() {
    int n,arr[13],i;
     cout << " Enter size of array : ";
     cin >> n;
     cout << " Enter elements of array : \n";
     for(i=0; i<n; i++) {
         cin >> arr[i];
     }
     
     int hash[13] = {0};
     
     // Assigning values to hash table
     for(i=0; i<n; i++) {
         int num = arr[i];
         hash[num] += 1;
     }
     
     // Checking from hash table
     int digit;
     cout << endl << "Enter digit to be checked : ";
     cin >> digit;
     cout << endl << "Number of times given digit appears : " << hash[digit];
     return 0;
}
