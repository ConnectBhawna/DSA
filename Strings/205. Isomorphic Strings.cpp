/*
problem statement link : https://leetcode.com/problems/isomorphic-strings/
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
         vector<int> v1(300,0); 
        vector<int> v2(300,0);
        
        int iter=1;
        for(int i=0;i<s.size();i++)
        {
            if(v1[s[i]]==0&&v2[t[i]]==0){
                v1[s[i]]=v2[t[i]]=iter; 
                iter++;                 
            }
            else
            {
                if(v1[s[i]]!=v2[t[i]])  
                    return false;
            }
        }
     
        return true;
        
    }
};