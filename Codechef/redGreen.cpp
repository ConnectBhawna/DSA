/*
Problem link :  https://www.codechef.com/INFI21C/problems/DOLL
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0;
        cin>>n>>k;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        for(int i=0;i<n;i++){
            if(h[i] > k){
                count++;
            }
        }
        cout<<count<<endl;
    }
   
    return 0;
}