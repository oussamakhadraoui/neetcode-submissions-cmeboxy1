class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        int n =p.size();
        vector<pair<int,int>>sorted;
        for(int i =0;i<n;i++){
            sorted.push_back({p[i],s[i]});
        }
        sort(sorted.begin(),sorted.end());
        double time =0;
        int result = 0;
        for(int i =n-1;i>=0;i--){
            double t= (double)(target-sorted[i].first)/sorted[i].second;
            if(time<t){
                time = t;
                result ++;
            }
        }
        return result;
    }
};
//temp= dist/speed
