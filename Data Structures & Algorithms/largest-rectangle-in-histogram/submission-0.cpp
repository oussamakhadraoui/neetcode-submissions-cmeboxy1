class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<pair<int,int>>st;
        int result=0;
        int n=h.size();
        for(int i =0;i<n;i++){
            int start=i;
            while(st.size()&&st.top().second>h[i]){
                int index= st.top().first;
                int height= st.top().second;
                result=max(result,height*(i-index));
                start=index;
                st.pop();

            }

            st.push({start,h[i]});
        }
        while(st.size()){
            result=max(result,st.top().second*(n-st.top().first));

            st.pop();
        }
        return result;
    }
};
