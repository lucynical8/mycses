#include <vector>
#include <iostream>
using namespace std;

int n;

vector<pair<int,int>> moves;

void hanoi(int n, int source, int target, int aux) {
    if (n == 0) return;
    hanoi(n - 1, source, aux, target);
    moves.push_back({source, target});
    hanoi(n - 1, aux, target, source);
}

int main() {
    cin >> n;
    hanoi(n, 1, 3, 2);
    cout << (1LL << n) - 1 << endl;
    for (auto &p : moves) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}