class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup = -1;
        
        for(int i=0; i<nums.size(); i++){
            int val=abs(nums[i]);
            if(nums[val] >= 0){
                nums[val] = -nums[val];
            }
            else{
                dup = val;
                break;
            }
        }
        
        return dup;
        
    }
};