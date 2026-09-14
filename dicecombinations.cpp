#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

int n;
const ll MOD = 1e9 + 7;

int main() {
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int face = 1; face <= 6; face++) {
            if (i - face >= 0) {
                dp[i] = (dp[i] + dp[i - face]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}