/*
Problem statement link : https://leetcode.com/problems/excel-sheet-column-number/
*/

class Solution {
public:
    int titleToNumber(string col) {
         int s=col.length();
        int ans=0,c=0;
        for(int i=s-1;i>=0;i--){
            ans+=pow(26,c++)*(col[i]-64);
        }
        return ans;
        
    }
};