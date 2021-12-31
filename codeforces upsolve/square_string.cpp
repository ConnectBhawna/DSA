/*
https://codeforces.com/contest/1619/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++) //macro 
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        bool ok = true;
        if (s.length() % 2 == 0) {
            forn(i, s.length() / 2)
                if (s[i] != s[i + s.length() / 2])
                    ok = false;
        } else
            ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }
}