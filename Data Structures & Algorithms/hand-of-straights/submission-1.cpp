class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>rec;
        for(int &n:hand){
            rec[n]++;
        }
        for(auto&[key,val]:rec){
            int count=val;
            if(count==0)continue;
            for(int i=0;i<groupSize;i++){
                if(rec[i+key]<count)return false;
                rec[i+key]-=count;
            }
        }
        return true;

    }
};
