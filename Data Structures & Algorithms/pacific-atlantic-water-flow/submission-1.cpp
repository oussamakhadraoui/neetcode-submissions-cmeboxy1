int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

class Solution {
public:
    int n,m;
    bool isOk(int i,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    void dfs(int i,int j,vector<vector<int>>& h,vector<vector<int>>&vis){
        vis[i][j]=1;
        for(int move=0;move<4;move++){
            int x= i+dx[move];
            int y= j+dy[move];
            if(isOk(x,y)&&!vis[x][y]&&h[i][j]<=h[x][y])dfs(x,y,h,vis);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        this->n=h.size();
        this->m=h[0].size();
        vector<vector<int>>pac(n,vector<int>(m,0));
        vector<vector<int>>alt(n,vector<int>(m,0));
        for(int i =0;i<n;i++)dfs(i,0,h,pac);
        for(int i =0;i<m;i++)dfs(0,i,h,pac);
        for(int i =0;i<n;i++)dfs(i,m-1,h,alt);
        for(int i =0;i<m;i++)dfs(n-1,i,h,alt);
        vector<vector<int>>result;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pac[i][j]&&alt[i][j])result.push_back({i,j});
            }
        }
        return result;

    }
};