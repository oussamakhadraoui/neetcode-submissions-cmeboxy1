int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int n ,m;
    vector<vector<int>>vis;
    bool isOk(int x,int y){
        return x>=0 && x<n && y>=0 &&y<m;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        this->n=grid.size();
        this->m=grid[0].size();
        queue<pair<int,int>>q;
        int safe=0;

        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)safe++;
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        if(safe==0)return 0;
        int result =0;
        while(q.size()){
            int size=q.size();
            int rotted=false;
            while(size--){
                int x= q.front().first;
                int y = q.front().second;
                q.pop();
                for(int move =0;move<4;move++){
                    
                    int movex= x + dx[move];
                    int movey= y + dy[move];

                    if(isOk(movex,movey)&&grid[movex][movey]==1){
                        safe--;
                        rotted=true;
                        grid[movex][movey]=2;
                        q.push({movex,movey});

                    }
                }
            }
            if(rotted)result++;
        }
        if(safe>0)return -1;
        return result;

    }
};
