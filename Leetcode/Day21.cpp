#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
         sort(nums.begin() ,nums.end());
        
        for(int i=1; i<nums.size(); i+=2){ //i+=2 as we want to check every other element
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1]; 
        
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
    int x = s.singleNumber(v);
    cout<<"NON EMPTY IN THE VECTOR IS : "<<x<<endl;
    return 0;
}