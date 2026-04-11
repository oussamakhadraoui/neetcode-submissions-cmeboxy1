class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>rec;
        for(string &s:strs){
            string clone = s;
            sort(clone.begin(),clone.end());
            rec[clone].push_back(s);
        }
        vector<vector<string>>result;
        for(auto[key,val]:rec){
            result.push_back(val);
        }
        return result;
    }
};
