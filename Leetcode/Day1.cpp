int transitionPoint(int arr[], int n) {
    
    int count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            return count;
            
        }
        else{
            count++;
        }
        
    }
     return -1;
}     
     
#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,0,0,1,1},n=5;
    int c = transitionPoint(arr,n);
    cout<<c;
}     
