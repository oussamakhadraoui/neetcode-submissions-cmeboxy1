class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>>rec;
        for(int i =0;i<speed.size();i++){
            rec.push_back({position[i],speed[i]});
        }
        sort(rec.begin(),rec.end());
        int result=0;
        double timeToReah=0.0;
        for(int i =speed.size()-1;i>=0;i--){
            double t =(double)(target-rec[i][0])/rec[i][1];
            if(t>timeToReah){
                result++;
                timeToReah=t;
            }
        }
        return result;

    }
};
