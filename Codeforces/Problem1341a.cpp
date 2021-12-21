/*
https://codeforces.com/problemset/problem/1341/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b,c,d;
    int ABsum,ABsub,CDsum,CDsub;
    cin>>t;
    while(t--)
    {
        ABsum=ABsub=CDsum=CDsub=0;
        cin>>n>>a>>b>>c>>d;
        ABsum=a+b;
        ABsub=a-b;

        CDsum=c+d;
        CDsub=c-d;

        if( (n*ABsum >= CDsub) && (n*ABsub <= CDsum) ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}