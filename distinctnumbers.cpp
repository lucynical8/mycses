#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int count = (n > 0) ? 1 : 0;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) count++;
    }
    cout << count << endl;
    return 0;
}