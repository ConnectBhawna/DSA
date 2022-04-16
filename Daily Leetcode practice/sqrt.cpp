#include<iostream>
using namespace std;
class Solution {
    //Optimal approach in time complexity = O(logn)
public:
    long long int binarySearch(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e - s)/2;
        
        long long int ans = -1;
        while(s<=e){
            
            long long int square = mid*mid;            
            if(square == n )
                return mid;
            
            if(square < n){
                ans = mid;
                s = mid +1;
            }
            
            else{
                e = mid -1;
            }
            mid = s +(e-s)/2;
            
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    
         
    }
};
/* 
//Brute force code
int mySqrt(int x) {
      long long i=0;
      while(i*i<=x)
         i++;
        return i-1;
     }
 */    
int main(){
    Solution s;
    int x = s.mySqrt(4);
    cout<<x<<endl;
    long long int y = s.mySqrt(11);
    cout<<x;
    return 0;
}