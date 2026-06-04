class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>rec;
        int n = s.size();
        int m = t.size();

        if(n!=m)return false;
        for(int i =0;i<n;i++){
            rec[s[i]]++;
            rec[t[i]]--;
        }
        for(auto[key,val]:rec){
            if(val!=0)return false;
        }

        return true;
    }
};
