#include <iostream>
using namespace std;
using ll = long long;

ll n, c, x, r;

int main() {
    cin >> n >> c;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < c) {
            r += c - x;
        } else {
            c = x;
        }
    }
    cout << r << endl;
    return 0;
}