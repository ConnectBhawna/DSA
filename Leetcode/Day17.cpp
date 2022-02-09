/*
https://leetcode.com/problems/k-diff-pairs-in-an-array/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count =0;
      map<pair<int, int>, int> m;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k and m.find({nums[j], nums[i]})==m.end())
                    m[{nums[i], nums[j]}]++;
            }
        }
        return m.size();
        
    }
};
int main(){
    Solution s;
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k;
    cout<<"Enter the number whose sum you want to know.";
    cin>>k;
    int x = s.findPairs(v,k);
    cout<<"Absolute addition is : "<<x;
    return 0;
}