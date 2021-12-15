/*
https://codeforces.com/problemset/problem/591/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,ans,a,b,spd;
    while(cin>>x>>a>>b)
    {
        spd=x/(a+b);
        ans=spd*a;
        cout<<ans<<endl;
    }
    return 0;
}