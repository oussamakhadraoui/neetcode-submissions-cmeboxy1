class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int end=intervals[0][1];
        int res=0;
        int n = intervals.size();
        for(int i =1;i<n;i++){
            if(intervals[i][0]>=end){
                end=intervals[i][1];
            }else{
                res++;
                end= min(end,intervals[i][1]);
            }
        }
        return res;

    }
};
