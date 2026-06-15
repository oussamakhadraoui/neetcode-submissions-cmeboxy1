class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>inordered(numCourses);
        unordered_map<int,int>vis;
        for(vector<int>&p:prerequisites){
            inordered[p[1]].push_back(p[0]);
            vis[p[0]]++;
        }
        queue<int>q;
        for(int i =0;i<numCourses;i++){
            if(vis[i]==0)q.push(i);
        }
        vector<int>result;
        while(q.size()){
            int size = q.size();
            int front= q.front();
            result.push_back(front);
            q.pop();
            for(int &c:inordered[front]){
                vis[c]--;
                if(vis[c]==0)q.push(c);
            }
        }
        return result.size()==numCourses?result:vector<int>();
    }
};
