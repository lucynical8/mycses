#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string s;

int main() {
    cin >> s;
    int freq[26] = {0};
    for (char c : s) freq[c - 'A']++;
    char oddch = 0;
    int oddcn = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddch = 'A' + i;
            oddcn++;
        }
    }
    if (oddcn > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string half = "";
    for (int i = 0; i < 26; i++) {
        half += string(freq[i] / 2, 'A' + i);
    }
    string result = half;
    if (oddcn == 1) result += oddch;
    reverse(half.begin(), half.end());
    result += half;
    cout << result << endl;
    return 0;
}