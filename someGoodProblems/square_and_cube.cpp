/*
*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 1; i * i < n; i++)
            a.push_back(i * i);
        for (int i = 1; i * i * i < n; i++)
            a.push_back(i * i * i);
        cout << a.size()-1 << endl;
    }
}