#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string s) {
        // TWO POINTER
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                i=j+1;               
            }
            else{
                s[j]=tolower(s[j]);
                if(j-i+1>2){
                    s[i]=toupper(s[i]);
                }
            }
        }
        return s;
    }
};
int main(){
    Solution s;
    string str = "capiTalIze tHe titLe";
    cout<<" \nString before capatalizing: \n"<<str;
    string x = s.capitalizeTitle(str);
    cout<<" \nList after capatalizing is: \n"<<x;

    return 0;
}