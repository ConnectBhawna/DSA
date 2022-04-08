#include<bits/stdc++.h>
using namespace std;
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


int main