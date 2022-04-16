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

int binarySearch(int arr[],int start,int size,int key){
    start=0,end = size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key ){
            return mid;
        }
        else{
            if(arr[mid] < key){
                start = mid;
                end = size-1;
                mid = (start + end)/2;
            }
            else if(arr[mid] > key){
                start = 0;
                end = mid;
                mid = (start + end)/2;
            }
        }
    }
    return -1;
}
int findPosition(int arr[],int n,int k){
    int pivot = getPivot(arr,5);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot -1,k);
    }
}
int main(){
    int arr[5] = {9,18,17,1,6};
    int x = findPosition(arr,5,17);
    return 0;
}
