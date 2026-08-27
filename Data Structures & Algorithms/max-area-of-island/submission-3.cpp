#include<cstring>
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

class Solution {
public:
    int n ;
    int m ;
    bool vis[51][51];
    bool isOk(int x,int y ){
        return x>=0 && y>=0 && x<n && y<m;
    }
    int dfs(int i ,int j ,vector<vector<int>>&grid){
        int result=1;
        vis[i][j]=1;
        for(int x=0;x<4;x++){
            int moveX=i+dx[x];
            int moveY=j+dy[x];
            if(isOk(moveX,moveY)&&grid[moveX][moveY]&&!vis[moveX][moveY])result+=dfs(moveX,moveY,grid);

        }

        return result;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        memset(vis,0,sizeof(vis));
        this->n= grid.size();
        this->m= grid[0].size();
        int result=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]&&!vis[i][j]){
                    result=max(result,dfs(i,j,grid));
                }
            }
        }
        return result;

    }
};
