class Solution {
public:
    vector<int>vis;
    bool icycle(int i ,vector<vector<int>>&inordered){
        if(vis[i]==1)return true;
        if(vis[i]==2)return false;
        vis[i]=1;
        for(int&x:inordered[i]){
            if(icycle(x ,inordered))return true;
        }


        vis[i]=2;
        return false;


    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>inordered(numCourses);
        for(vector<int>&p:prerequisites){
            inordered[p[1]].push_back(p[0]);
        }
        vis=vector<int>(numCourses,0);
        for(int i =0;i<numCourses;i++){
            if(!vis[i]){
                if(icycle(i,inordered))return false;
            }
        }
        return true;
    }
};
