#include<iostream>
using namespace std;

int main(){ 

string s,t;
cin>>s>>t;

int l=0;
int r=s.length() - 1;

while(l<r){

    char ch=s[l];
    s[l] = s[r];
    s[r]=ch;
    l++;
    r--;
}
if(s == t){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}