class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j=0;
        int n =s.size();
        unordered_map<char,int>rec;
        int result =0;
        while(j<n){
            rec[s[j]]++;
            while(rec[s[j]]>1&&i<j){
                rec[s[i]]--;
                i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};
