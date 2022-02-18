/*
https://leetcode.com/problems/two-sum/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> x;
        int i=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] + nums[j] > target){
                x.push_back(i);
                x.push_back(j);
            }
            else{
                i++;
            }
        }
        return x;
        
    }
};
int main(){
    Solution s;
    str = "my name is bhawna chauhan";
    string x = s.twoSum(str);
    cout<<" \nList after capatalizing is: \n"<<x;

    return 0;
}
