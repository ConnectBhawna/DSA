/*
rotate array problem 
in time complexity of O(N)
space complexity O(1)
*/
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int d){
  
  int arr2[n];
  int s = 0;
  for(int i=d; i<n; i++){
      arr2[s] = arr[i];
      s++;
  }
  
  for(int j=0; j<d; j++){
      arr2[s] = arr[j];
      s++;
  }
  
  
  for(int j=0; j<n; j++){
      arr[j] = arr2[j];
  }
}
void printArray(int arr[], int n){
  
  for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
  }
  cout<<"\n";
}
int main() {
//code
int t;
cin>>t;
while(t--){
   int n;
   int d;
   cin>>n;
   cin>>d;
   int a[n];
   
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   rotateArray(a,n,d);
   printArray(a, n);
}
}

 

