class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        stack<int>st;
        vector<int>result(n,0);
        for(int i =0;i<n;i++){
            while(st.size()&&t[st.top()]<t[i]){
                result[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};
