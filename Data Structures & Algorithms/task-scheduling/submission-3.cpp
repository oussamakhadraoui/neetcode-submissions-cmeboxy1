class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>rec;
        for(char &c:tasks)rec[c]++ ;
        queue<pair<int,int>>q;
        priority_queue<int>pq;
        int time = 0;

        for(auto&[key,val]:rec)pq.push(val);
        while(q.size()||pq.size()){
            time++;
            if(pq.size()){
                int top = pq.top()-1;
                pq.pop();
                if(top>0)q.push({top,time+n});
            }
            if(q.size()&&q.front().second==time){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return time ;
    }
};
