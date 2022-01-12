/*
https://codeforces.com/problemset/problem/1418/A
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){

        ll x , y , k ;
        cin >> x >> y >> k ;
        ll total_needed = k + y * k - 1;

        ll x2 = x - 1;
        ll trade = (total_needed + x2-1)/x2;
        trade += k ;
        cout << trade <<  endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}