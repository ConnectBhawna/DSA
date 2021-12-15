/*
https://codeforces.com/problemset/problem/915/A
*/
#include <iostream>
using namespace std;
int main(){
    int n, k, tmp, ans = 1e5;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(k % tmp == 0)
            ans = min(ans, k / tmp);
    }
    cout << ans << "\n";
    return 0;
}
