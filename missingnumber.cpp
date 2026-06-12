#include <iostream>
using namespace std;
using ll = long long;

ll n, s = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        s += a;
    }
    cout << (n * (n + 1) / 2) - s << endl;
    return 0;
}