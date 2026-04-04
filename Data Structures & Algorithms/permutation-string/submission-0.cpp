class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>c1(26,0);
        vector<int>c2(26,0);
        int n = s1.size();
        int n1= s2.size();
        if(n>n1)return false;
        for(int i =0;i<n;i++){
            c1[s1[i]-'a']++;
            c2[s2[i]-'a']++;
        }
        int j=0;
        for(int i =0;i<=n1-n;i++){
            if(c1==c2)return true;
           
           if(i+n<=n1){
            c2[s2[i]-'a']--;
            c2[s2[i + n] - 'a']++;

           }
        }
        return false;
    }
};
