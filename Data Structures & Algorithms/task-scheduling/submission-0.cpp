class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time =0;
        unordered_map<char,int>rec;
        for(char &t:tasks)rec[t]++;
        priority_queue<int>pq;
        for(auto&[key,val]:rec)pq.push(val);
        queue<pair<int,int>>trace;
        while(pq.size()||trace.size()){
            time++;
            if(pq.size()){
                auto top = pq.top()-1;
                pq.pop();
                if(top>0)trace.push({top,time+n});
            }
            if(trace.size()&&trace.front().second==time){
                pq.push(trace.front().first);
                trace.pop();
            }
            

        }
        return time;

    }
};
