class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,int>rec;
        vector<vector<int>>inordered(numCourses);
        for(vector<int>&p:prerequisites){
            inordered[p[1]].push_back(p[0]);
            rec[p[0]]++;
        }

        queue<int>q;

        for(int i =0;i<numCourses;i++){
            if(rec[i]==0)q.push(i);
        }
        vector<int>result;
        while(q.size()){
            int n = q.size();

            int i = q.front();
            q.pop();
            result.push_back(i);
            for(int c :inordered[i]){
                rec[c]--;
                if(rec[c]==0)q.push(c);
            }
        }
        return result.size()==numCourses?result:vector<int>();
    }
};
