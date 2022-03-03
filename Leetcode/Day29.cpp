#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        
        int cnt = 0, diff = 0 , ind = 0;
        int prev_diff = nums[1] - nums[0];
        
        for(int i = 1; i<nums.size()-1 ; ++i)
        {
          
            int diff = nums[i+1] - nums[i];
            if(diff ==  prev_diff)
                ++ind;
            
            else
            {
                prev_diff = diff;
                ind = 0;  
            }
              cnt += ind;
        }
        
       
        return cnt;
        
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
    int pro_max = s.numberOfArithmeticSlices(v);
    cout<<"\n\t Arithmatic Slicing is :"<<pro_max;
    return 0;
}