//Here we are discussing Bubble Sort
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n){
 
    
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            
            if(arr[j] > temp){
                //shifting
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
    
}
int main(){
    int arr[5] = {3,4,1,0,10};
    insertionSort(arr,5);
    printArray(arr,5);
    return 0;
}