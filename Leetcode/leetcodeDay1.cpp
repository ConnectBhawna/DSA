#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;
    }

};
int main(){
    Solution s;
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    vector<int> sol;
    sol = runningSum(num);
    for(int i=0; i<num.size();++i){
        cout<<i<<" ";
    }
    cout<<"Finally done";
    return 0;

}
