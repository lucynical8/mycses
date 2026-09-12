#include <iostream>
using namespace std;
using ll = long long;

ll t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll a, b;
        cin >> a >> b;
        ll total = a + b;
        if (total % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }
        ll x = 2 * b - a;
        ll y = 2 * a - b;
        if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}