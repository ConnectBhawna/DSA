#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
             vector<int> runningSum(vector<int>& nums){
                 int n = nums.size();
                 for(int i=1;i<n;i++){
                     nums[i]+=nums[i-1];
                 }
                 return nums;
             }
             void print(vector<int>& s){
                 for (auto i = s.begin(); i != s.end(); ++i)
                 cout << *i << " ";   
             }
};
int main(){
        Array a;
        vector<int> v,s;
        v.push_back(5);
        v.push_back(1);
        v.push_back(3);
        s = a.runningSum(v);
        a.print(s);
        
   return 0;
}