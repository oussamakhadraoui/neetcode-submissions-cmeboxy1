class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1.size()>text2.size()){
            string temp =text1;
            text1=text2;
            text2= temp;
        }
        int n = text1.size();
        int m = text2.size();
        vector<int>prev(m+1,0);
        vector<int>curr(m+1,0);
        for(int i =n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(text1[i]==text2[j]){
                    curr[j]=1+prev[j+1];
                }else{
                    curr[j]=max(curr[j+1],prev[j]);
                }

            }
            prev=curr;
        }

        return curr[0];

    }
};
