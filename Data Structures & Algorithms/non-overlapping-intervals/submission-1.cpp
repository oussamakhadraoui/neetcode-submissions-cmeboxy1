class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int result= 0;
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int end= intervals[0][1];
        for(int i =1;i<n;i++){
            if(intervals[i][0]>=end){
                end= max(intervals[i][1],end);
            }else{
                result++;
                end = min(end,intervals[i][1]);
            }
        }
        return result;
    }
};
