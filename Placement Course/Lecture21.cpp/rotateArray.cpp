#include <bits/stdc++.h>
using  namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] + nums[i];
        }
        //copy temp into nums as it mentioned
        nums = temp;
        
    }
};
int main(){

    return 0;
}

//INput => arr[] = {1,2,9,11} k = 2
//Output => {9,11,1,7}
//INput => arr[] = {-1,-100,3,99} k = 2
//Output => {3,99,-1,-100}
