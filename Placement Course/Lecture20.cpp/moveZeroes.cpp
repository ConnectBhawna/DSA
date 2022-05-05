#include <bits/stdc++.h>
using  namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
                
            }
        }
        
    }
    void print(vector<int>& v){
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    }
};
int main(){
    Solution s;
    vector<int> v ={0,2,0,3,2};
    s.moveZeroes(v);
    s.print(v);

    return 0;
}