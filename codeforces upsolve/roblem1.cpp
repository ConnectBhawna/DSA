/*
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a = x,b=y,c=z;
        if(max(a,b) == x || max(a,c) == y ||max(b,c) ==z){
            cout<<"Yes";
            cout<<max(a,b)<<" "<<max(a,c)<<" "<<max(b,c);
        }
        else{
            cout<<"No";
        }

    }
    
    return 0;
}