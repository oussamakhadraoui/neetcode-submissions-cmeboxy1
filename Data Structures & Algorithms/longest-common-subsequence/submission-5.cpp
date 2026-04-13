class Solution {
public:
    int n ,m;
    vector<vector<int>>dp;
    string t1,t2;
    int solve(int i,int j ){
        if(i==n||j==m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int result=0;
        if(t1[i]==t2[j]){
            result=1+solve(i+1,j+1);
        }else{
            result=max(solve(i+1,j),solve(i,j+1));
        }
        return dp[i][j]=result;
    }
    int longestCommonSubsequence(string text1, string text2) {
        this->n=text1.size();
        this->m=text2.size();

        this->t1=text1;
        this->t2=text2;

       dp= vector<vector<int>>(n,vector<int>(m,-1));
       return solve(0,0); 
    }
};
