#include <iostream>
using namespace std;
using ll = long long;

ll n;

int main() {
    cin >> n;
    int c = 0;
    for (ll p = 5; p <= n; p *= 5) {
        c += n / p;
    }
    cout << c << endl;
    return 0;
}