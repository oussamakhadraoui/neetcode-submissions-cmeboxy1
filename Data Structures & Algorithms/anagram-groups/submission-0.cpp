class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>rec;
        for(int i =0;i<strs.size();i++){
            string s =strs[i];
            sort(s.begin(),s.end());
            rec[s].push_back(strs[i]); 
        }
        for(auto &[key,val]:rec){
            result.push_back(val);
        }
        return result;
    }
};
