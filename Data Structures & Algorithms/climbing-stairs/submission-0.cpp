#include <cstring>
class Solution {
public:
int dp[46];
int dfs(int n,int curr){
    if(curr>n)return 0;
    if (curr == n) return 1;
    if(dp[curr]!=-1)return dp[curr];
    int result=dfs(n,curr+1)+dfs(n,curr+2);
    return dp[curr]=result;
}
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return dfs(n,0);
    }
};
