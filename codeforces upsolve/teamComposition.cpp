/*
https://codeforces.com/contest/1611/problem/B
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a,b;
        cout<<min(min(a,b),(a+b)/4)<<endl;
    
    }
    return 0;
}