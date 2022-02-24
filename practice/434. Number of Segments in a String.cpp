/*
Problem statement link : https://leetcode.com/problems/number-of-segments-in-a-string/
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
        int count =0;
        for(int i=0;i<s.length();i++)
        {
            if (s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0'){
                    count++;
        }
        }
        return count;
    }
};
int main(){
    Solution s;
    string s1="Hello, my name is John";
    int x =  s.countSegments(s1);
    cout<<"No of spaces in between the following is :"<<x;
    return 0;
}