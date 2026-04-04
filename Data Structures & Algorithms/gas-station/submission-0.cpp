class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumOfgas=0;
        int totCost=0;
        int n = cost.size();
        for(int i =0;i<n;i++){
            sumOfgas+=gas[i];
            totCost+=cost[i];
        }
        int start=0;
        int sum=0;
        if(totCost>sumOfgas)return -1;
        for(int i =0;i<n;i++){
            sum+=gas[i]-cost[i];
            if(sum<0){
                sum=0;
                start=i+1;
            }
        
        }
        return start;
    }
};
