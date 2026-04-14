class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time=0;
        unordered_map<int,int>rec;
        for(char& t:tasks)rec[t]++;
        priority_queue<int>pq;
        for(auto& [key,val]:rec)pq.push(val);
        queue<pair<int,int>>q;
        while(q.size()||pq.size()){
            time++;
            if(pq.size()){
                auto top=pq.top()-1;
                pq.pop();
                if(top>0)q.push({top,time+n});
            }
            if(q.size()&&q.front().second==time){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};
