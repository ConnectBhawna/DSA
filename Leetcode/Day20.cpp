#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     void recurse(vector<int> &nums, int n, int index, vector<int> &temp, vector<vector<int>> &ret)
    {
        if(index == n)
        {
            ret.push_back(temp);
            return;
        }
        recurse(nums, n, index+1, temp, ret);
        temp.push_back(nums[index]);
        recurse(nums, n, index+1, temp, ret);
        temp.pop_back();
        return;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> ret;
        recurse(nums, n, 0, temp, ret);
        return ret;
    }
};
int main(){
    return 0;
}