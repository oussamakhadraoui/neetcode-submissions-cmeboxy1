class Solution {
public:
    int maxArea(vector<int>& h) {
        int i =0,j= h.size()-1;
        int result=0;
        while(i<j){
            int dist= j-i;
            if(h[i]<=h[j]){
                result=max(result,h[i]*dist);
                i++;
            }else{
                result=max(result,h[j]*dist);
                j--;
            }
        }
        return result;

    }
};
