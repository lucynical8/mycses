#include <iostream>
using namespace std;
using ll = long long;

ll n;

int main() {
    cin >> n;
    ll total = 1LL << n;
    for (ll i = 0; i < total; i++) {
        ll gray = i ^ (i >> 1);
        for (int b = n - 1; b >= 0; b--) {
            cout << ((gray >> b) & 1);
        }
        cout << endl;
    }
    return 0;
}