class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
         int last=(1<<graph.size())-1;
        
        queue<array<int,3>> q;
        set<pair<int,int>> st;
        
        for(int i=0;i<graph.size();i++)
            q.push({i,1<<i,0});
        
        
        while(!q.empty()){
            
            int sz=q.size();
            
            while(sz--){
                
                array<int,3> ar=q.front();
                q.pop();
                
                if(ar[1]==last) return ar[2];
                
                for(auto n:graph[ar[0]]){
                    int mask=ar[1]|(1<<n);
                    if(!st.count({n,mask})){
                        st.insert({n,mask});
                        q.push({n,mask,ar[2]+1});
                    }
                }
            }   
        }
        return 0;
        
    }
};
