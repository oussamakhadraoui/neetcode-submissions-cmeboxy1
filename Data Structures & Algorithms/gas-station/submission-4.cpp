class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas= 0;
        int sumcost=0;
        int n = gas.size();
        for(int i =0;i<n;i++){
            sumgas+=gas[i];
            sumcost+=cost[i];
        }
        if(sumcost>sumgas)return -1;
        int start=0;
        int sum=0;
        for(int i =0;i<n;i++){
            sum+=(gas[i]-cost[i]);
            if(sum<0){
                sum=0;
                start=i+1;
            }
        }
        return start;
    }
};
