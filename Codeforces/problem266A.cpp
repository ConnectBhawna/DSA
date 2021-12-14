/*
https://codeforces.com/problemset/problem/266/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
