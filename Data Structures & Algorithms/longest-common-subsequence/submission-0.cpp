#include<cstring>
const int N= 1001;
class Solution {
public:
    string t1;
    string t2;
    int dp [N][N];
    int solve(int i,int j){
        if(i>=t1.size()||j>=t2.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int result=0;
        if(t1[i]==t2[j])result=1+solve(i+1,j+1);
        else result=max(solve(i+1,j),solve(i,j+1));

        return dp[i][j]=result;
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        this->t1=text1;
        this->t2=text2;
        return solve(0,0);

    }
};
