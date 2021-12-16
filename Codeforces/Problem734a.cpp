/*
https://codeforces.com/problemset/problem/734/A
*/
#include<iostream>
using namespace std;
int main(){
    long long int n;
    int count1=0,count2=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i] =='A'){
            count1++;
        }
        else if(s[i] == 'D'){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Anton";
    }
    else if(count1 == count2){
        cout<<"Friendship";
    }
    else
        cout<<"Danik";
    
    return 0;
}