class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==1)return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(int i =1;i<n;i++){
            int x= intervals[i][0];
            int y= intervals[i][1];
            int x1= result.back()[0];
            int y1= result.back()[1];
            if(x>=x1&&x<=y1){
                result.back()[1]=max(y1,y);
            }else result.push_back(intervals[i]);


        }
        return result;
    }
};
