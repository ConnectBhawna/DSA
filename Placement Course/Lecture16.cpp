//Here we discuss about the Selection Sort
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[],int n){
    for(int i = 0 ; i< n-1 ; i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    int arr[5] = {3,4,1,0,10};
    selectionSort(arr,5);
    printArray(arr,5);
    return 0;
}