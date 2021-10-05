// Fibonacci

#include <iostream>

using namespace std;

int fib(int n) {
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1) return n;
    for (i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int rfib(int n) {
    if (n <= 1) return n;
    return rfib(n - 2) + rfib(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;
    return 0;
}
