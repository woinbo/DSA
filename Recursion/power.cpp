//  Power Function

#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}  //Method 1

int power1(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power1(m * m, n / 2);
    return m * power1(m * m, (n - 1) / 2);
}  // Method 2

int main() {
    int r = power1(2, 3);
    cout << r;
    return 0;
}
