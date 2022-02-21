/*
problem statement link : https://leetcode.com/problems/relative-ranks/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
             
        vector <string> mp;
        
        for (int i = 0; i < score.size(); i++) {
            int currentNum = 1;
            for (int j = 0; j < score.size(); j++) {
                if (score[i] < score[j]) {
                    currentNum++;
                }    
            }
            
            if (currentNum == 1) {
                mp.push_back("Gold Medal");
            } else if (currentNum == 2) {
                mp.push_back("Silver Medal");
            } else if (currentNum == 3) {
                mp.push_back("Bronze Medal");
            } else {
                mp.push_back(to_string(currentNum));
            }
        }
        
        return mp;
    }
};
int main(){
    Solution s;
    vector<int> v;
    cout<<"\n\t Enter the elements of vector";
    for(int i=0;i<v.size();i++){}
     { 
         int a;
         cin>>a;
         v. push_back(a);
     }
    vector<string> str;
    str =  s.maximumProduct(v);
    return 0;
}