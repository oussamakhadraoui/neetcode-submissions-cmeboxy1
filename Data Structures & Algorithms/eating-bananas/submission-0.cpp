class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int j= *max_element(piles.begin(),piles.end());
        int i =1;
        while(i<=j){
            int mid= i+(j-i)/2;
            int time=0;
            for(int&p:piles){
                time+=p/mid;
                if(p%mid)time++;
            }
            if(time<=h){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return i;
    }
};
