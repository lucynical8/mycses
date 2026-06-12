#include <iostream>
using namespace std;

char c, l;
string str;
int a = 1, m = 1;

int main() {
    cin >> str;
    l = str[0];
    for (int i = 1; i < str.size(); i++) {
        c = str[i];
        if (c == l) a++;
        else a = 1;
        if (a > m) m = a;
        l = c;
    }
    cout << m << endl;
    return 0;
}