class Solution {
public:
    int n ,m;
    vector<vector<int>>dp;
    int solve(int i,int j,string &s1,string&s2){
        if(i==n)return m-j;
        if(j==m)return n-i;
        if(dp[i][j]!=-1)return dp[i][j];
        int result;
        if(s1[i]==s2[j]){
            return result=solve(i+1,j+1,s1,s2);
        }
        result=min({solve(i+1,j,s1,s2),solve(i,j+1,s1,s2),solve(i+1,j+1,s1,s2)});
        return dp[i][j]=result+1;
    };
    int minDistance(string word1, string word2) {
        this->n = word1.size();
        this->m = word2.size();
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return solve(0,0,word1,word2);
    }
};
