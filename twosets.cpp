#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

ll n, a, x, y, m;
vector<ll> v1, v2;

int main() {
    cin >> n;
    a = n * (n + 1) / 2;
    if (a % 2 == 1) {
        cout << "NO" << endl;
        return 0;
    }
    m = n;
    cout << "YES" << endl;
    while (x != a / 2 || y != a / 2) {
        if (x + m <= a / 2) {
            v1.push_back(m);
            x += m;
            m--;
        } else if (y + m <= a / 2) {
            v2.push_back(m);
            y += m;
            m--;
        }
    }
    cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}