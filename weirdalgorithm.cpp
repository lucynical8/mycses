#include <iostream>
using namespace std;
using ll = long long;

ll n;

ll solve(ll x) {
    cout << x << " ";
    if (x == 1) return 1;
    if (x % 2 == 0) return solve(x / 2);
    if (x % 2 != 0) return solve(3 * x + 1);
    return 0;
}

int main() {
    cin >> n;
    solve(n);
    return 0;
}