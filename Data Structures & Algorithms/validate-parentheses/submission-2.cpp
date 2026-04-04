class Solution {
public:
    bool isValid(string s) {
        int n =s.size();
        if(n%2==1)return false;
        stack<char>st;
        unordered_map<char,char>rec;
        rec['}']='{';
        rec[']']='[';
        rec[')']='(';

        for(char &c:s){
            if(!rec[c]){
                st.push(c);
            }else{
                if(st.empty()||st.top()!=rec[c]){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
        return st.size()==0;
    
    }
};
