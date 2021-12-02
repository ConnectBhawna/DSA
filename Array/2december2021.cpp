

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[n],b[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> score;
        int sc;
        for(int i=0;i<n;i++){
            sc=20*a[i]-10*b[i];
           if(sc<0){
               sc=0;           }
        }
        score.push_back(sc);
        cout<<*max_element(score.begin(),score.end());
    }
   return 0;
}