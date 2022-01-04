/*
https://codeforces.com/problemset/problem/1485/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int a,b,k;
    cin>>k;
    while(k--){
        cin>>a>>b;
        int j=0,count = 1e9;
        for(;j<1000;j++){
            int i=0;
            if(b+j <2 ) continue;
            int m = a;
            while(m){
                m /= b+j;
                i++;
            }
            count = min(count,i+j);
        }
        cout<<count<<endl;
    }
    return 0;
}