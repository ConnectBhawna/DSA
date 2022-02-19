/*
https://leetcode.com/problems/distribute-candies/
*/
//firstly by using stl set it takes extra space for the same
class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        
        unordered_set<int> s(candy.begin(),candy.end());
        int n = candy.size();
        
        return min(n/2,int(s.size()));
        
       
        
    }
};

//Now without using any extra space that is just by using array functions
// space complexity is O(1) and O(nlogn)
class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        
        int count =0;
        sort(candy.begin(),candy.end());
        int n = candy.size();
        if(n == 0)
            return 0;
        
        else{
            for(int i=1;i<=n;i++){
                count += (candy[i] != candy[i-1]);
            }
        }
        
     return count;  
        
    }
};