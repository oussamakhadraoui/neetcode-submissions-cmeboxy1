class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<pair<int,int>>rec;
        int  n= s.size();
        for(int i =0;i<n;i++){
            rec.push_back({p[i],s[i]});
        }
        stack<double>st;
        sort(rec.begin(),rec.end());
        for(int i =n-1;i>=0;i--){
            double t = (double)(target - rec[i].first) / rec[i].second;
            if(st.empty()||t>st.top()){
                st.push(t);
                
            }

        }
        return st.size();
    }
};
