class Solution {
public:
    int trap(vector<int>& h) {
        int result=0;
        int n = h.size()-1;
        int i =0;
        int j = n;
        int maxleft =0;
        int maxright =0;

        while(i<j){
            maxright=max(maxright,h[j]);
            maxleft=max(maxleft,h[i]);

            if(maxright>maxleft){
                result+=(maxleft-h[i]);
                i++;
            }else{
                result+=(maxright-h[j]);
                j--;                
            }
        }

        return result;
    }
};
