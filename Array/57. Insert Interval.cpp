/*
Problem statement link : https://leetcode.com/problems/insert-interval/
*/
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         if (intervals.size() < 1){
        return {newInterval};
    }
    
    
    int countNewPos = intervals.size();
    for (int i = 0; i < intervals.size(); i++){
        if(intervals[i][0] > newInterval[0]){
            countNewPos = i;
            break;
        }
    }
    intervals.insert(intervals.begin() + countNewPos, newInterval);
    vector<vector<int>> insertedVect{intervals[0]};
       
    
    for (int i = 1; i < intervals.size(); i++){
        if (insertedVect.back()[1] >= intervals[i][0]){
            insertedVect.back()[1] = max(insertedVect.back()[1], intervals[i][1]);
        } else{
            insertedVect.push_back(intervals[i]);
        }
    }
    return insertedVect;   
        
    }
};