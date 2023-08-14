#include <iostream>
using namespace std;

// Fibonacci Sequence : 0 1 1 2 3 5 8 13 21 34 ...

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    int last = fibonacci(n-2);
    int slast = fibonacci(n-1);
    return last + slast;
}

int main() {
    int n;
    cout << "Enter fibonacci number to check : ";
    cin >> n;
    int ans = fibonacci(n);
    cout << endl << "fibonacci number is : " << ans;
    return 0;
}
