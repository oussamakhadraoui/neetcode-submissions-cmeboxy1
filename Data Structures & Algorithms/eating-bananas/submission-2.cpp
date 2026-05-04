class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int result=0;
        long long i =1;
        
        long long j = *max_element(piles.begin(),piles.end());
        
        while(i<=j){
            int mid = i+(j-i)/2;
            int count=0;
            for(int&p:piles){
                count+=p/mid;
                if(p%mid)count++;
            }
            if(count<=h){

                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return i;
    }
};
