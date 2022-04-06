#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int arr[],int size,int key){
    int start=0,end = size-1;
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
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,13,14,16};
    printArray(even,6);
    int x = binarySearch(even,6,12);
    cout<<"\n\t Element found at :"<<x;
    cout<<"\n\n\t";
     printArray(odd,5);
    int y = binarySearch(odd,5,13);
    cout<<"\n\t Element found at :"<<y;

}