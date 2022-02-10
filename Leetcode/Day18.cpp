class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int> mpp;
        
        int res=0,currsum=0,n=nums.size();
        
        for( auto &it:nums)
        {
            currsum+=it;
            if(currsum==k)
            { res++; }
            
            if(mpp.count(currsum - k))
            {
                res+=mpp[currsum-k];
            }
            
            mpp[currsum]++;
        }
        
        return res;
        
    }
};