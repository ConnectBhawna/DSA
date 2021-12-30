/*
https://codeforces.com/problemset/problem/61/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,main_string;
    cin>>s;
    cin>>t;

    for(int i=0;i<s.length();i++){
        if(s[i] != t[i]){
            main_string+="1";
        }
         else{
            main_string+="0";
        }
    }
    cout<<main_string;
    return 0;
}