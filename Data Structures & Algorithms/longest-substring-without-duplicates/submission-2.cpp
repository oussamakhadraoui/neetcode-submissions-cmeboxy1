class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>rec;
        int i =0,j=0;
        int n = s.size();int result = 0;
        while(j<n){
            rec[s[j]]++;
            while(rec[s[j]]>1){
                rec[s[i]]--;
                i++;
            }
            result=max(result,j-i+1);
            j++;

        }
        return result;
    }
};
