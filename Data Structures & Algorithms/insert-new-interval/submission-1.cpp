class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        int i =0;
        int n= intervals.size();
        while(i<n&&intervals[i][1]<newInterval[0]){
            result.push_back(intervals[i]);
            i++;
        }
        result.push_back(newInterval);
        while(i<n&&result.back()[1]>=intervals[i][0]){
            result.back()[1]=max(result.back()[1],intervals[i][1]);
            result.back()[0]=min(result.back()[0],intervals[i][0]);
            i++;

        }
        while(i<n){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};
