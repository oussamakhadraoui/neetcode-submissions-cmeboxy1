class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i =0;
        int j = n-1;
        int result =0;
        while(i<j){
            if(h[i]<h[j]){
                int sum= (j-i)*h[i];
                result = max(result,sum);
                i++;
            }else{
                int sum= (j-i)*h[j];
                result = max(result,sum);
                j--;
            }
        }
        return result;
    }
};
