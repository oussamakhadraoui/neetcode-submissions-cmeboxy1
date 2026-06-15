class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int&s:stones)pq.push(s);
        while(pq.size()>1){
            int num1=pq.top();
            pq.pop();
            int num2=pq.top();
            pq.pop();
            int collide=abs(num1-num2);
            if(collide)pq.push(collide);
        }
        return pq.size()?pq.top():0;
    }
};
