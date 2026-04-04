class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,int>rec;
        vector<vector<int>>pre(numCourses);
        for(int i =0;i<prerequisites.size();i++){
            rec[prerequisites[i][0]]++;
            pre[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int>q;
        for(int i =0;i<numCourses;i++){
            if(!rec[i])q.push(i);
        }
        vector<int>result;
        while(q.size()){
            int top=q.front();
            q.pop();
            result.push_back(top);
            for(int x:pre[top]){
                rec[x]--;
                if(rec[x]==0)q.push(x);
            }
        }
        return result.size()==numCourses?result:vector<int>();
    }
};
