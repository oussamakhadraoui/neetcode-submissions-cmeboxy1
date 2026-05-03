class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>rec1(26,0);
        vector<int>rec2(26,0);
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2)return false;
        for(int i =0;i<n1;i++){
            rec1[s1[i]-'a']++;
            rec2[s2[i]-'a']++;
        }
        if(rec1==rec2)return true;

        for(int i =n1;i<n2;i++){
            rec2[s2[i-n1]-'a']--;
            rec2[s2[i]-'a']++;
            if(rec1==rec2)return true;
        };
        return false;

    }
};
