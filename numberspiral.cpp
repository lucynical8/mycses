#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll t, x, y, m, r;

ll res(ll m) {
    return m * (m - 1) + 1;
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        m = max(x, y);
        r = res(m);
        if (x > y) {
            if (x % 2 == 0) {
                cout << r + x - y << endl;
            }
            if (x % 2 != 0) {
                cout << r + y - x << endl;
            }
        } else if (x < y) {
            if (y % 2 == 0) {
                cout << r + x - y << endl;
            }
            if (y % 2 != 0) {
                cout << r + y - x << endl;
            }
        } else {
            cout << r << endl;
        }
    }
    return 0;
}