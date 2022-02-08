/*
Problem statement Link = https://leetcode.com/problems/add-digits/
Written by = Bhawna chauhan
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        return 1+ (num - 1) %9;
    }
};
int main(){
    Solution s;
    int x = s.addDigits(38);
    cout<<x;
    return 0;
}