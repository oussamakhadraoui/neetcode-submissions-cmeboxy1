class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxRight=0;
        int maxLeft=0;
        int n =h.size();
        int i =0;int j = n-1;
        int result =0;
        while(i<j){
            maxRight=max(maxRight,h[j]);
            maxLeft=max(maxLeft,h[i]);
            if(maxLeft<maxRight){
                result=max(result,(j-i)*maxLeft);
                i++;
            }else{
                result=max(result,(j-i)*maxRight);
                j--;
            }

        }
        return result;
    }
};
