//Problem statement link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
//Statement written by Bhawna chauhan
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0], count = 1, pos = 1;
        for (int i = 1; i < nums.size(); i++)
            if (prev != nums[i])
                count = 1, prev = nums[i], nums[pos++] = nums[i];
            else if (count++ < 2)
                nums[pos++] = nums[i];
        return pos;
        
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
    int x = s.removeDuplicates(v);
    cout<<x<<endl;
    return 0;
}