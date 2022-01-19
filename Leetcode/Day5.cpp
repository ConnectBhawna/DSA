/*
Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

 

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:

Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.
 


*/

  void rotateArr(int arr[], int d, int n){
        // code here
        int temp[d];
        
        for(int i = 0; i < d; i++){
            temp[i] = arr[i];
        }
        for(int i = d; i < n; i++){
            arr[i - d] = arr[i];
        }
        int index = n - d;
        for(int i = 0; i < d; i++){
            arr[index++] = temp[i];
        }
    }