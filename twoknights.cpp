#include <iostream>
using namespace std;
using ll = long long;

ll n;

ll solve(ll x) {
    ll r = 0;
    if (x == 1) return 0;
    if (x == 2) return 0;
    if (x == 3) return 16;
    if (x == 4) return 48;
    r += (x - 4) * (x - 4) * 8;
    r += ((x - 4) * 4 + 4) * 4;
    r += (x - 4) * 4 * 6;
    r += 4 * 2 * 3;
    r += 4 * 2;
    return r;
}

int main() {
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cout << (i*i) * (i*i - 1) / 2 - solve(i) / 2 << endl;
    }
    return 0;
}