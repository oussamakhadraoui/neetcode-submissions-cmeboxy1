class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(string &s:strs){
            result+=to_string(s.size())+'#'+s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i =0;
        while(i<s.size()){
            int count=0;
            while(isdigit(s[i])){
                count=count*10+(s[i]-'0');
                i++;
            }
            i++;
            string add=s.substr(i,count);
            result.push_back(add);
            i+=count;

        }
        return result;
    }
};
