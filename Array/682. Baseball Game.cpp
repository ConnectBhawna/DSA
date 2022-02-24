/*
Problem statement link : https://leetcode.com/problems/baseball-game/
*/
/*  -------------------------------- Function USED----------------------------------------------------------------

1. v.push_back() -> Push(add) an element at the last of a vector.
2. v.pop_back()  -> Pop(remove) an element from last of vector.
3. accumulate(v.begin(),v.end(),0) -> sum of all elements(type (int)) in vector.
// here v.begin() is an iterator or pointer to the first index.
// v.end() is an iterator or pointer to the last index 
// 0 is passed beacuse at start the sum is 0.
4. stoi(x) -> convert x which is of string type to int.
*/
class Solution {
public:
    int calPoints(vector<string>& ops) {
         vector<int> v;
        int j = -1;
        for(int i = 0; i<ops.size(); ++i)
        {
            if(ops[i] == "+")
            {
                v.push_back(v[j] + v[j-1]); 
                ++j;
            }
            else if(ops[i] == "D")
            {
                v.push_back(2*v[j]); 
                ++j;
            }
            else if(ops[i] == "C")  
            {
                v.pop_back(); 
                --j;
            }
            else 
            {
                v.push_back(stoi(ops[i]));  
                ++j;
            }
               
        }
		return accumulate(v.begin(),v.end(),0);  
    }
};