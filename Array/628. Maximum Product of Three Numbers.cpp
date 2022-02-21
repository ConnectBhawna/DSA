/*
Problem statement link : https://leetcode.com/problems/maximum-product-of-three-numbers/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         int n = nums.size();
        sort(nums.begin(),nums.end());
        int max1 = nums[n-1];
        int max2 = nums[n-2];
        int max3 = nums[n-3];
        int min1 = nums[0];
        int min2 = nums[1];
        return max(max1*max2*max3, min1*min2*max1);
    }
};
int main(){
    Solution s;
    vector<int> v;
    cout<<"\n\t Enter the elements of vector";
    for(int i=0;i<v.size();i++){}
     { 
         int a;
         cin>>a;
         v. push_back(a);
     }
    int pro_max = s.maximumProduct(v);
    cout<<"\n\t Array maximium product is :"<<pro_max;
    return 0;
}