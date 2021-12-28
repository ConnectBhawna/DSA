/*
https://codeforces.com/problemset/problem/1199/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float  h,x,l,ans=0;
    cin>>h>>l;
    ans=(((l*l)-(h*h))/(2.0*h));
    printf("%.13f\n",ans);
    ans=0;
    return 0;
}