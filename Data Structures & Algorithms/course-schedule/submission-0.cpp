class Solution {
public:
    vector<vector<int>>indegree;
    vector<int>vis;
    bool isCycle(int index){
        if(vis[index]==1)return true;
        if(vis[index]==2)return false;
        vis[index]=1;
        for(int x:indegree[index]){
            if(isCycle(x))return true;
        }
        vis[index]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        indegree=vector<vector<int>>(numCourses);
        vis=vector<int>(numCourses,0);
        int n = pre.size();
        for(int i =0;i<n;i++){
            indegree[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i =0;i<indegree.size();i++){
            if(!vis[i]){
                if(isCycle(i))return false;
            }
        }
        return true;
    }
};
