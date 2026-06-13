#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 4) {
        cout << "2 4 1 3";
        return 0;
    }
    for (int i = 1; i < n - 1; i += 2) {
        cout << i << " ";
    }
    if (n % 2 != 0) {
        cout << n << " ";
    } else {
        cout << n - 1 << " ";
    }
    for (int i = 2; i < n - 1; i += 2) {
        cout << i << " ";
    }
    if (n % 2 == 0) {
        cout << n << " ";
    } else {
        cout << n - 1 << " ";
    }
    return 0;
}