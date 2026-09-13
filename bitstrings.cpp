#include <cmath>
#include <iostream>
using namespace std;
using ll = long long;

ll n;
int m = 1e9+7;

ll solve(ll a, ll e) {
    ll r = 1;
    while (e > 0) {
        if (e & 1) {
            r = r * a % m;
        }
        a = a * a % m;
        e = e >> 1;
    }
    return r;
}

int main() {
    cin >> n;
    cout << solve(2, n) << endl;
    return 0;
}