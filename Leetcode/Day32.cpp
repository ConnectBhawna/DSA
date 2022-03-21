class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=i;
            }
        }
        
        int mx=0;
        int start=-1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mx=max(mx,mp[s[i]]);
            if(i==mx){
                ans.push_back(mx-start);
                start=i;
            }
        }
        return ans;
        
    }
};