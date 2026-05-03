class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current = prices[0];
        int result=0;
        for(int &p:prices){
            if(current>p)current=p;
            result=max(result,p-current);
        }
        return result;
    }
};
