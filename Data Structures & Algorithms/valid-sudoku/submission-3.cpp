class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int cols[9]={0};
        int rows[9]={0};
        int boxes[9]={0};

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j]=='.')continue;
                int bit = 1<<board[i][j]-'0';
                int box=(i/3)*3+j/3;
                if(cols[i]&bit)return false;
                if(rows[j]&bit)return false;
                if(boxes[box]&bit)return false;
                cols[i]|=bit;
                rows[j]|=bit;
                boxes[box]|=bit;

            }
        }
        return true;

    }
};
