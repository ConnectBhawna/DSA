/*
https://www.codechef.com/CDRV21C/problems/FRGAME
*/
#include<bits/stdc++.h>
using namespace std;
#define fon(i,n) for(int i=0;i<int(n);i++)
int main(){
    int t;
    int a,b,c,d;
    cin>>t;
    fon(tt,t){
        cin>>a>>b>>c>>d;
        if(a<b)
            a+=c;
        else
            b+=c;

        if(a<b)
            a+=d;
        else
            b+=d;

        if(a<b){
            cout<<"S"<<endl;
        }   
        else{
            cout<<"N"<<endl;
        } 

        
    
    }
    return 0;
}