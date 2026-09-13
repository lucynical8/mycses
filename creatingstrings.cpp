#include <set>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string s;

int main() {
    cin >> s;
    sort(s.begin(), s.end());
    set<string> results;
    do {results.insert(s);}
    while (next_permutation(s.begin(), s.end()));
    cout << results.size() << endl;
    for (const string &perm : results) {
        cout << perm << endl;
    }
    return 0;
}