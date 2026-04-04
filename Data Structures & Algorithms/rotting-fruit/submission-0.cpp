int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};

class Solution {
public:
    bool isOk(int i ,int j,int n,int m){
        return i>=0&&j>=0&&j<m&&i<n;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        int safe =0;

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1)safe++;
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        if(safe==0)return 0;
        int result=0;
        while(q.size()){
            int size = q.size();
            bool rotted=false;
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int move=0;move<4;move++){
                    int moveX=x+dx[move];
                    int moveY=y+dy[move];
                    if(isOk(moveX,moveY,n,m)&&grid[moveX][moveY]==1){
                        safe--;
                        grid[moveX][moveY]=2;
                        q.push({moveX,moveY});
                        rotted=true;
                    }

                }
            }
            if(rotted)result++;

        }
        if(safe)return -1;

        return result;



    }
};
