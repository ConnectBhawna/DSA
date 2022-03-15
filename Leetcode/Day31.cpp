class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n= s.size();
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            if(s[i]==')') st.push(i);
            if(s[i]=='(')
                (st.size() && s[st.top()]==')')? st.pop(): st.push(i);        
        }

        string res="";
        for(int i=0;i<n;i++){ 
            if(st.size() and st.top()==i) st.pop();   
            else res+= s[i];
        }

        return res;
        
    }
};