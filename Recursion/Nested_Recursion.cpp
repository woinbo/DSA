#include <stdio.h>

#include <iostream>

using namespace std;

//  Nested Recursion
int fun(int n) {
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}
int main() {
    int r;
    r = fun(95);
    cout << r;
    return 0;
}
