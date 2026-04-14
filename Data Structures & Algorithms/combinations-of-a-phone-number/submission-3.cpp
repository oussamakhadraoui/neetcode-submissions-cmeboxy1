class Solution {
public:
    vector<string> digitToChar = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "qprs", "tuv", "wxyz"
    };
    void backtrack(string &add,vector<string>&result,string digits,int index){
        if(digits.size()==index){
            result.push_back(add);
            return ;
        }
        string letter= digitToChar[digits[index]-'0'];
        for(char& c:letter){
            add+=c;
            backtrack(add,result,digits,index+1);
            add.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        string add="";
        vector<string>result;
        backtrack(add,result,digits,0);
        return result;
    }
};
