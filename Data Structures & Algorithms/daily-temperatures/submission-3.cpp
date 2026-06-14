class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>result(n,0);
        stack<int>temp;

        for(int i =0;i<n;i++){
            while(temp.size() && t[temp.top()]<t[i] ){
                result[temp.top()]=i-temp.top();
                temp.pop();
            }
            temp.push(i);
        }
        return result;
    }
};
