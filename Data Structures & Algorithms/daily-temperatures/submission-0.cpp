class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& ts) {
        stack<int>st;
        int n = ts.size();
        st.push(0);
        vector<int>result(n,0);
        for(int i=1;i<n;i++){
            while(st.size()&&ts[i]>ts[st.top()]){
                result[st.top()]=i-st.top();
                st.pop();
            }
                st.push(i);
            
        }
        return result;
    }
};
