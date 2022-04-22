//Here we are discussing Bubble Sort
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i = 1 ; i< n ; i++){
        //for each round 1 to n-1
        bool swapped = false;//Here we did this if array is already sorted then it 
        //it reduces it'scomplexity into O(n) instead of O(n2)
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                 swap(arr[j],arr[j+1]);
                 swapped = true;
        }
        if(swapped == false)
        {
            break;
        }
        
    }
    
}
int main(){
    int arr[5] = {3,4,1,0,10};
    bubbleSort(arr,5);
    printArray(arr,5);
    return 0;
}