/*
https://codeforces.com/problemset/problem/231/A
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,sum=0,count=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum >=2){
            count++;
            sum=0;
        }
    }
    cout<<count<<endl;
    return 0;
}