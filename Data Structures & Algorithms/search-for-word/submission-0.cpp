#include<cstring>
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

class Solution {
public:
    int n ,m;
    bool vis[10][10];
    bool isOk(int i,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    bool dfs(int i ,int j ,int start,string word,vector<vector<char>>& b){
        if(start==word.size())return true;
        vis[i][j]=1;
        for(int x=0;x<4;x++){
            int ii= i+dx[x];
            int jj= j+dy[x];
            if(isOk(ii,jj)&&!vis[ii][jj]&&word[start]==b[ii][jj]){
                if(dfs(ii,jj,start+1,word,b))return true;
            }

        }
        vis[i][j]=0;
        return false;
    }
    bool exist(vector<vector<char>>& b, string word) {
        this->n=b.size();
        this->m=b[0].size();
        memset(vis,0,sizeof(vis));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i][j]==word[0]&&dfs(i,j,1,word,b))return true;
            }
        }
        return false;
    }
};
