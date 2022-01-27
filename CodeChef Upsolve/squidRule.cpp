/*
problem link : https://www.codechef.com/INFI21C/problems/SQUIDRULE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         int sum=a[0];
        int min = a[0];
        for(int i=1;i<n;i++){
            sum+=a[i];
            if(a[i] <min){
                min = a[i];
            }
        }
        cout<<sum-min<<endl;

    }
}