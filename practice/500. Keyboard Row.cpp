/*
problem link : https://leetcode.com/problems/keyboard-row/

*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> v;
        int m1=0,m2=0,m3=0,n;
        for(int i=0;i < words.size();i++){
            string str = words[i];
            n = str.length();
            for(int j=0;j<n;j++)
            {
                char c = tolower(str[j]);
                if(c == 'q' || c == 'w' || c == 'e' || c == 'r' || c == 't' || c == 'y' || c == 'u' || c == 'i' || c == 'o' || c == 'p'){
                    m1++;
                }
                else if(c  == 'a' || c == 's' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'k' || c == 'l'){
                    m2++;
                }
                else if(c  == 'z' || c == 'x' || c == 'c' || c == 'v' || c == 'b' || c == 'n' || c == 'm' ){
                    m3++;
                }
                     
            }
            if(n == m1 || n == m2 || n == m3){
                v.push_back(str);
            }
            m1=0,m2=0,m3=0;
        }
        return v;
        
    }
};