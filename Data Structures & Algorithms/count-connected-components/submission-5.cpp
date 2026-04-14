class Solution {
public:
    void dfs(int n,vector<vector<int>>&graph,vector<int>&vis){
        if(vis[n])return ;
        vis[n]=1;
        for(int &g:graph[n]){
            dfs(g,graph,vis);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n);
        for(auto&e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);

        }
        vector<int>vis(n,0);
        int result=0;
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(i,graph,vis);
                result++;
            }
        }
        return result;
    }
};
