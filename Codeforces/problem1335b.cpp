/*
https://codeforces.com/problemset/problem/1335/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
    }
    return 0;
}