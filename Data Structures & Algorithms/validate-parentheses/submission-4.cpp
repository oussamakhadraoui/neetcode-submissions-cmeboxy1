class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char>rec;
        rec['}']='{';
        rec[']']='[';
        rec[')']='(';

        for(char&c:s){
            if(!rec.count(c)){
                st.push(c);
            }else{
                if(st.size()&&rec[c]==st.top()){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size()==0;
    }
};
