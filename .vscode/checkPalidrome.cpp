#include <bits/stdc++.h>
using namespace std;

void funct(string &str, int l, int r, int &flag) {
    if (l >= r) {  // base case
        if (flag == 0) {
            cout << "PALINDROME";
        }
        return;
    }

    if (str[l] != str[r]) {
        cout << "NOT PALINDROME";
        flag = 1;
        return;
    }

    funct(str, l + 1, r - 1, flag);  // recursive step
}

int main() {
    string str;
    cin >> str;

    int l = 0, r = str.length() - 1;
    int flag = 0;

    funct(str, l, r, flag);

    return 0;
}
