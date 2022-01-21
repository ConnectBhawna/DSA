/*
https://codeforces.com/contest/1611/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if((n.back() - '0')%2 == 0){
            cout<<0<<endl;
        }
        else if((n[0] - '0')%2 == 0){
            cout<<1<<endl;
        }
        else{
            int count=0;
            for(int i=0;i<n.length();i++){
                if((n[i]-'0')%2 == 0){
                    count++;
                    break;
                }
            }
            if(count >0){
                cout<<2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
        }
    }
    return 0;
}