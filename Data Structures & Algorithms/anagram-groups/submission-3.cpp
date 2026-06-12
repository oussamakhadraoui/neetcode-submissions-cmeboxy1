class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>rec;
        int n = strs.size();
        for(int i =0;i<n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            rec[s].push_back(strs[i]);

        }
        vector<vector<string>>result;
        for(auto&[key,val]:rec){
            result.push_back(val);
        }
        return result;
    }
};
