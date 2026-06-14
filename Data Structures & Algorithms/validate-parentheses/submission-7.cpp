class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>rec;
        rec[']']='[';
        rec[')']='(';
        rec['}']='{';
        stack<char>st;
        int n = s.size();

        for(int i =0;i<n;i++){
            if(!rec[s[i]])st.push(s[i]);
            else{
                if(st.empty() || st.top()!=rec[s[i]]){
                    return false;
                }else st.pop();
            }
        }
        return st.size()==0;

    }
};
