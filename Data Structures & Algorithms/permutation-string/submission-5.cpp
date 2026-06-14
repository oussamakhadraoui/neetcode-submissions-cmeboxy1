class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n>m)return false;
        unordered_map<char,int>rec1;
        unordered_map<char,int>rec2;
        for(int i=0;i<n;i++){
            rec1[s1[i]]++;
            rec2[s2[i]]++;
        }
        if(rec1==rec2)return true;
        for(int i =n;i<m;i++){
            rec2[s2[i]]++;
            rec2[s2[i-n]]--;
            if (rec2[s2[i-n]] == 0)
                rec2.erase(s2[i-n]);
            
            if(rec1==rec2)return true;
        }
        return false;


    }
};
