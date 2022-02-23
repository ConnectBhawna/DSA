/*
Problem statement link : https://leetcode.com/problems/4sum/
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
          int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> str;
        
        for(int i =0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                int temp = target - nums[i] - nums[j];
                
                int x = j+1, y = n-1;
                while(x < y){
                    int sum = nums[x] + nums[y];
                    
                    if(sum > temp){
                        y--;
                    }else if(sum < temp){
                        x++;
                    }else{
                        str.insert({nums[i], nums[j], nums[x], nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        for(auto x: str){
            ans.push_back(x);
        }
        return ans;
    }
};