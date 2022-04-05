//In first lecture we learn about flowcharts and pseudocode
#include <iostream>
using namespace std;
/*
int main(){
    cout<<"I am 18 years old"<<endl;

    char b = 'y';
  //  char b = 'ab';
    cout<<b<<endl;

    bool bl = true;
    cout<<bl<<endl;
}
*/
/*
int main(){
    int n;
    cin>>n;
  ;

    int i =1;
    while(i<=n){
        cout<<i<<" ";
        i +=1;
    }
}
*/
//Now some pattern problem 
void printPattern1(){
     int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1; 
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i = i+1;

    }

}
void printPattern2(){
    int n;
    cin>>n;
    int i =n;
    while(i>=1){
        int j=1; 
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i = i-1;

    }

}
void printPattern3(){
    int n,count=1;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1; 
        while(j<=n){
            cout<<count<<" ";
            count++;
            j=j+1;
        }
        cout<<endl;
        i = i+1;

    }

}

void printPattern4(){
    int n,count=1;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1; 
        while(j<=i){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i = i+1;

    }

}
/*
//https://leetcode.com/problems/complement-of-base-10-integer/
class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int mask = 0;
        
        if(n == 0){
            return 1;
        }
        while( m!=0) {
            mask = (mask << 1)| 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        
        return ans;
        
    }
};
//https://leetcode.com/problems//reverseInteger/
class Solution {
public:
    int reverse(int x) {
        
        int ans =0;
        
        while( x!= 0){
            int digit = x%10;
            
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans =(ans*10)+digit;
            x = x/10;
        }
        return ans;
    }
};
//https://leetcode.com/problems/power-of-two/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && !(n & n-1);
    }
};

*/
bool search(int arr[], int key,int n){
    for (int i =0;i<n;i++){
        if(arr[i] == key){ 
            return true;
        }
    }
    return false;
}

int main(){
    //printPattern1();
    //cout<<"Pattern 2 is :"<<endl;
   // printPattern2();
    //cout<<"Pattern 3 is :"<<endl;
    //printPattern3();
    //cout<<"Pattern 4 is :"<<endl;
    //printPattern4();
    //int key ;
    //int arr[10] = {3,4,5,6,32,34,2,9,0,21};
    //cout<<"\n\t Enter the Value that you want to search"<<endl;
    //cin>>key;
    //bool x= search(arr,key,10);
   // if(x == true){
   //     cout<<"Key is found";
   // }
   // else{
   //     cout<<"Key is not found";
   // }
    
}

