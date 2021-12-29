/*
problem link :https://codeforces.com/problemset/problem/467/
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(q-p >= 2){
              count++;
        }
    }
    cout<<count<<endl;
    return 0;
}