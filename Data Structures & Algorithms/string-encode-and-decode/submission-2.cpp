class Solution {
public:

    string encode(vector<string>& strs) {
        string result ="";
        int n = strs.size();
        for(int i =0;i<n;i++){
            result+=to_string(strs[i].size())+'#'+strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>result;
        while(i<s.size()){
            int count=0;
            while(isdigit(s[i])){
                count=count*10+(s[i]-'0');
                i++;
            }
            i++;
            result.push_back(s.substr(i,count));
            i+=count;
        }
        return result;
    }
};
