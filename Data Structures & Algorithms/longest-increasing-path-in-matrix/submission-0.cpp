int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

class Solution {
public:
    int n,m;
    vector<vector<int>>dp;
    vector<vector<int>>vis;


    bool isOk(int i,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    int dfs(int i,int j,vector<vector<int>>& matrix){
        if(dp[i][j]!=-1)return dp[i][j];
        int result=1;
        vis[i][j]=1;
        for(int move=0;move<4;move++){
            int x=i+dx[move];
            int y=j+dy[move];
            if(isOk(x,y)&&!vis[x][y]&&matrix[i][j]<matrix[x][y]){
                result=max(result,1+dfs(x,y,matrix));
            }

        }
        vis[i][j]=0;
        return dp[i][j]=result;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        this->n=matrix.size();
        this->m=matrix[0].size();
        int result=0;
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        vis=vector<vector<int>>(n,vector<int>(m,0));

        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                result=max(result,dfs(i,j,matrix));
            }
        }
        return result;
    }
};
