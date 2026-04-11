class Solution {
public:
    int characterReplacement(string s, int k) {
        int i =0;int j = 0;
        int n = s.size();
        int result=0;
        int maxi=0;
        unordered_map<char,int>rec;
        while(j<n){
            rec[s[j]]++;
            maxi=max(maxi,rec[s[j]]);
            while(i<j && maxi+k<(j-i+1)){
                rec[s[i]]--;
                i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};
