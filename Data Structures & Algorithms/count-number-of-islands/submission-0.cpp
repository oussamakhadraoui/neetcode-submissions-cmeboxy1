#include<cstring>;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

const int N= 101;
class Solution {
public:
    int n ;
    int m ;
    int vis[N][N];
    bool isOk(int i,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    void dfs(int i,int j,vector<vector<char>>& grid){
        if(vis[i][j])return ;
        vis[i][j]=1;
        for(int move=0;move<4;move++){
            int moveX=i+dx[move];
            int moveY=j+dy[move];
            if(isOk(moveX,moveY)&&grid[moveX][moveY]=='1')dfs(moveX,moveY,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        memset(vis,0,sizeof(vis));
        this->n= grid.size();
        this->m= grid[0].size();
        int result=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&!vis[i][j]){
                    dfs(i,j,grid);
                    result++;
                }
            }
        }
        return result;

    }
};
