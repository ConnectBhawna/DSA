class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int f = 1 , s = 1;
        while(f < nums.size()){
            if(nums[f-1] != nums[f]) nums[s] = nums[f] , s++;
            f++;
        }
        return s;
    }
};