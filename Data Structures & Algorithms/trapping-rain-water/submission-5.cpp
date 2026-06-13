class Solution {
public:
    int trap(vector<int>& h) {
       int n =  h.size();
       int i =0;
       int j = n-1;
       int result = 0;
       int leftmax= 0;
       int rightmax=0;
       while(i<j){
            leftmax= max(leftmax,h[i]);
            rightmax= max(rightmax,h[j]);
            if(leftmax>rightmax){
                result+= (rightmax-h[j]);
                j--;
            }else{
                result+=(leftmax-h[i]);
                i++;
            }
       }
       return result;
    }
};
