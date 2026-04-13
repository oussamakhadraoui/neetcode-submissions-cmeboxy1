class Solution {
public:
    vector<int>vis;
    void dfs(vector<vector<int>>&graph,int node){
        if(vis[node])return ;
        vis[node]=true;
        for(int g:graph[node]){
            dfs(graph,g);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vis=vector<int>(n+1,0);
        vector<vector<int>>graph(n);
        for(int i =0;i<edges.size();i++){
            graph[edges[i][1]].push_back(edges[i][0]);
            graph[edges[i][0]].push_back(edges[i][1]);
        }
        int result=0;
        for(int i =0;i<n;i++){
        
            if(!vis[i]){
                dfs(graph,i);
                result++;
            }
            
        }
        return result;
    }
};
