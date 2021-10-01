//Static Variables in Recursion
#include <stdio.h>

#include <iostream>

using namespace std;

int staticV(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return staticV(n - 1) + x;
    }
    return 0;
}

//Global Variabels in Recursion
int x = 0;
int global(int n) {
    if (n > 0) {
        x++;
        return global(n - 1) + x;
    }
    return 0;
}

int main() {
    int r;
    r = staticV(5);
    cout << r << endl;
    r = staticV(5);
    cout << r << endl;
    r = global(5);
    cout << r << endl;
    r = global(5);
    cout << r << endl;
    return 0;
}
