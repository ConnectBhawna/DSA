/*
This one is important to understand
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

 

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.

*/

#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long > &arr,int n, int k){
       
       if(k>n){
           k=n;
       }
       int c=n/k;
       int i=0;
       for(i=0;i<c;i++){
           reverse(arr.begin()+i*k,arr.begin()+(i+1)*k);
           
       }
       reverse(arr.begin()+i*k,arr.end());
}       
       
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long > arr;
    cout<<"\n\t Enter the array element: ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    reverseInGroups(arr,n,k);

    return 0;
}
