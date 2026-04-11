class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int n= b.size();
        int  m= b[0].size();
        int rows[9]={0};
        int cols[9]={0};
        int boxes[9]={0};

        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i][j]=='.')continue;
                int bit= 1<<b[i][j]-'0';
                int box=(i/3)*3+j/3;
                if(rows[i]&bit)return false;
                if(cols[j]&bit)return false;
                if(boxes[box]&bit)return false;
                rows[i]|=bit;
                cols[j]|=bit;
                boxes[box]|=bit;
            }
        }
        return true;
    }
};
