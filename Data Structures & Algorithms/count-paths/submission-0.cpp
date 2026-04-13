class Solution {
public:
    vector<vector<int>>dp;
    int solve(int n,int m ){
        if(n==0&&m==0)return 1;
        if(n<0||m<0)return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        return dp[n][m]=solve(n-1,m)+solve(n,m-1);
    }
    int uniquePaths(int m, int n) {
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return solve(n-1,m-1);
    }
};
