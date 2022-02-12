#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
                vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
                unordered_map<string,int> m;
                vector<string> v;
      
                for(int i=0;i<l1.size();i++){
                      m[l1[i]]=i;
                }
        
                int idx=INT_MAX;
                for(int i=0;i<l2.size();i++){
                        if(m.find(l2[i])!=m.end()){
                                idx=min(idx,i+m[l2[i]]);
                        }
                }
      
                for(int i=0;i<l2.size();i++){
                      if(m.find(l2[i])!=m.end()){
                            if(i+m[l2[i]]==idx) v.push_back(l2[i]);
                     }
              }
        return v;
    }
};
int main(){
    return 0;
}