class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>rec;
        int i =0;int j =0;
        int n=s.size();
        int maxi=0;
        int result=0;
        while(j<n){
            rec[s[j]]++;
            maxi=max(maxi,rec[s[j]]);
            while(j-i+1-maxi>k){
                rec[s[i]]--;
                i++;
            }
            result= max(result,j-i+1);
            j++;
        }
        return result;

    }
};
