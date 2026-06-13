class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9]={};
        int col[9]={};
        int box[9]={};
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                if(board[i][j]=='.')continue;
                int bit = 1<<board[i][j]-'0';
                int b = (i/3)*3+j/3;
                if(row[i]&bit)return false;
                if(col[j]&bit)return false;
                if(box[b]&bit)return false;
                col[j]|=bit;
                row[i]|=bit;
                box[b]|=bit;
            }
        }
        return true;
    }
};
