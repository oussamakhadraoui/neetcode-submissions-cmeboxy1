class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int valid= true;
        for(int i =0;i<9;i++){
            unordered_map<char,int>rec;
            for(int j=0;j<9;j++){
                if(b[i][j]=='.')continue;
                if(rec[b[i][j]]){
                    return false;
                }else{
                    rec[b[i][j]]++;
                }
            }
        }

        for(int j =0;j<9;j++){
            unordered_map<char,int>rec;
            for(int i=0;i<9;i++){
                if(b[i][j]=='.')continue;
                if(rec[b[i][j]]){
                    return false;
                }else{
                    rec[b[i][j]]++;
                }
            }
        }        

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_map<char,int>rec;
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        if(b[x+i][y+j]=='.')continue;
                    if(rec[b[x+i][y+j]]){
                        return false;
                }else{
                    rec[b[x+i][y+j]]++;
                }
                    }
                }
            }
        }

        return valid;
    }
};
