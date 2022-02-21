/*
Problem statement = https://leetcode.com/problems/majority-element/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end()); // sort the vector
         return nums[nums.size()/2]; 
    }
};