class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> res;
        res.push_back(0);
        
        while(res.size() < n + 1) {
            int l = res.size();
            for (int i = 0; i < l; i++) {
                res.push_back(res[i]+1);
                if (res.size() == n + 1) {
                    return res;
                }
            } 
        }
      
        return res;
        
    }
};