#include<bits/stdc++.h>
using namespace std;
class Solution {

  public:
        int rob(vector<int>& nums){
            int a=0,b=0,c=0;
            int temp;
            for(int i=0;i<nums.size();i++){
                temp= max(b,c)+temp;
                c=b;
                b=a;
                a=temp;
            }
            return max(a,b);
        }
};
int main(){
    vector<int> v;
    int n;
   
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    Solution s;
    int num = s.rob(v);
    cout<<"Answer of the data is "<<num;
}