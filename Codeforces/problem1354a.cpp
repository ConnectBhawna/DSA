/*
https://codeforces.com/problemset/problem/1354/A
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     long t;
     cin>>t;
     while(t--){
         ll a,b,c,d;
         cin>>a>>b>>c>>d;
         ll ans(0);
         if(b>=a){ans = b;}
         else if(c<=d){ ans = -1;}
         else{
             a-=b;
             ans = b+((a+c-d-1)/(c-d)*c);
         }
         cout<<ans<<endl;
     }
     return 0;
}