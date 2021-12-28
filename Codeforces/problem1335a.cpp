/*
https://codeforces.com/problemset/problem/1335/A
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        if(n<3){
            std::cout<<0<<"\n";
        }
        else if(n%2 == 0) {
            std::cout<<n/2-1<<"\n";
        }
        else{
            std::cout<<n/2<<"\n";
        }
    }
    return 0;
}