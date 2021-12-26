/*
problem link :https://www.codechef.com/INFI21C/problems/MARBLE

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count =0;
        cin>>n;
        string s,p;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            if(s[i] != p[i]){
                count++;
            }
        }
     cout<<count<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
#define int long long

void solve(){
    int n,k,sum=1;
    cin>>n>>k;
    k=n-k;
    n--;
    if(k>n-k){
        k=n-k;
    }
    for(int i=0;i<k;i++){
        sum*=n;
        sum/=i+1;
        n--;
    }
    cout<<sum<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
*/