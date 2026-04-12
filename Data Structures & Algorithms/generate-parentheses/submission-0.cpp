class Solution {
public:
    vector<string>result;
    void backtrack(int left,int right,string s){
        if(!left&&!right)result.push_back(s);
        if(left>0){
            backtrack(left-1,right,s+'(');
        }
        if(right>left){
            backtrack(left,right-1,s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        backtrack(n,n,"");
        return result;
    }
};
