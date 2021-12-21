//https://codeforces.com/problemset/problem/116/A
#include<iostream>
using namespace std;
int main(){
      int i,n,a,b,p=0,max=0;
      cin>>n;
      for(i=0;i<n;i++){
          cin>>a>>b;
          p=b-a+p;
          if(max<p){
              max=p;
          }

      }
      cout<<max;
      return 0;
}
