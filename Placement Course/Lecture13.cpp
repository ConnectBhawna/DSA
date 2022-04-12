#include<bits/stdc++.h>
using namespace std;
/*
class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target,int start,int end){
        
        int index=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){ 
                index=mid;
                
                end=mid-1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return index;
    }
    int lastOccurrence(vector<int>& nums, int target,int start,int end){
        int index=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){ 
                index=mid;
                //Continue the search for the second half until the last occurrence is found
                start=mid+1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        return {firstOccurrence(nums,target,start,end),lastOccurrence(nums,target,start,end)};
    }
};
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        
        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid +1;
            }
            else{
                e = mid;
            }
            
            mid = s + (e-s)/2;
        }
        return s;
    }
};


int main(){
    Solution s;
    vector<int> ans = {3,4,5,1};
   int x = s.peakIndexInMountainArray(ans);
   cout<<"Peak of element is :"<<x<<endl;

}