int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

class Solution {
public:
    int n,m;
    vector<vector<int>>vis;
    bool isOk(int i ,int j ){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    bool dfs(vector<vector<char>>& b, string word,int index,int i,int j ){
        if(index>=word.size())return true;
        vis[i][j]=1;
        for(int move=0;move<4;move++){
            int x= i+dx[move];
            int y= j+dy[move];
            if(isOk(x,y)&&!vis[x][y]&&word[index]==b[x][y]){
                if(dfs(b,word,index+1,x,y))return true;
            }
        }
        vis[i][j]=0;
        return false;


    }
    bool exist(vector<vector<char>>& b, string word) {
        this->n=b.size();
        this->m=b[0].size();
        vis=vector<vector<int>>(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0]==b[i][j]){
                    if(dfs(b,word,1,i,j))return true;
                }
            }
        }
        return false;

    }
};
