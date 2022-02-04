class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m; 
        int maxl=0; //max length
        vector<int>pre(nums.size(),0);
        for(int i=0;i<nums.size();i++){
          if(i==0) pre[i]= (nums[i]==0 ? -1 : 1);
          else pre[i]=pre[i-1]+ (nums[i]==0 ? -1 : 1) ;
        
            if(pre[i]==0) maxl=max(maxl,i+1); 
            else if(m.find(pre[i])!=m.end()){
                maxl=max(maxl,i-m[pre[i]]); 
            }
            else m[pre[i]]=i; 
        }
    return maxl;
        
    }
};
