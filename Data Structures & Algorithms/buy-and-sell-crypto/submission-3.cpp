class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result =0;
        int current=prices[0];
        for(int& n:prices){
            if(n<current)current=n;
            result=max(result,n-current);
        }
        return result;
    }
};
