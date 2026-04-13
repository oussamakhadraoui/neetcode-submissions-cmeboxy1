class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas=0;
        int totCost=0;
        int n = cost.size();
        for(int i =0;i<n;i++){
            totGas+=gas[i];
            totCost+=cost[i];
        }
        if(totGas<totCost)return -1;
        int start=0;
        int sum=0;
        for(int i =0;i<n;i++){
            sum+=gas[i]-cost[i];
            if(sum<0){
                start=i+1;
                sum=0;
            }
        }
        return start;
    }
};
