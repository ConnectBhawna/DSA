/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

 

Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.



*/
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        for(int i=0;i<n;i++)
        {
          int X=arr[arr[i]]%n;
          arr[i]=arr[i]+X*n;
        }
         for(int i=0;i<n;i++)arr[i]/=n;
        
    }
};