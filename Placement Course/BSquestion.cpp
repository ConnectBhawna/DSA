#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
       int s=0;
       int e = n-1;
       int mid = s + (e-s)/2;

       while(s<e){
           if(arr[mid] >= arr[0]){
               s = mid+1;
           }
           else{
               s = mid;
           }
           mid = s+ (e-s)/2;
       }
       return s;

}
int main(){
    int arr[5] = {9,18,17,1,3,6};
    cout<<"Pivot is"<<getPivot(arr,5)<<endl;
    return 0;
}
