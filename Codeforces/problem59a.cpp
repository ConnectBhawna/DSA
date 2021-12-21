/*
https://codeforces.com/problemset/problem/59/A
*/
#include<bits/stdc++.h>
using namespace std;
 string s;
int check(){
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            count1++;
        }
        else if(islower(s[i])){
            count2++;
        }
    }
 return count1,count2;
}
void update(){

}
int main(){
 
  cin>>s;
  int a,b = check();
   
  if(a > b){
      for(int i=0;i<s.length();i++){
               int c = s[i];
              s[i] = toupper(c);  
       }
  }   
   else if(a == b){
         for(int i=0;i<s.length();i++){
                  int c = s[i];
                  s[i] = tolower(c);  
         }        
   }
   else {
         for(int i=0;i<s.length();i++){
                  int c = s[i];
                  s[i] = tolower(c);  
         }        
   }
   
    for(int i=0;i<s.length();i++){
         cout<<s[i];
    }
        
    
return 0;

}


