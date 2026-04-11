class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>>rec;
        for(int i =0;i<speed.size();i++){
            rec.push_back({position[i],speed[i]});
        }
        sort(rec.begin(),rec.end());
        stack<double>st;
        for(int i =speed.size()-1;i>=0;i--){
            double t =(double)(target-rec[i][0])/rec[i][1];
            if(st.empty()||t>st.top()){
                st.push(t);
                
            }
        }
        return st.size();

    }
};
