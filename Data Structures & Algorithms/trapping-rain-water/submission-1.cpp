class Solution {
public:
    int trap(vector<int>& h) {
        int leftMax=0;
        int rightMax=0;
        int n = h.size();
        int i =0;
        int j=n-1;
        int result=0;
        while(i<j){
            leftMax=max(leftMax,h[i]);
            rightMax=max(rightMax,h[j]);
            if(rightMax>leftMax){
                result+=(leftMax-h[i]);
                i++;
            }else{
                result+=(rightMax-h[j]);
                j--;
            }
        }
        return result;
    }
};
