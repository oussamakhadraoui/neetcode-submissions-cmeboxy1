class Solution {
public:
    pair<int,int>expansion(int i ,int j ,string s){
        while(i>=0&&j<s.size()){
            if(s[i]==s[j]){
                i--;
                j++;
            }else break;
        }
        return {i+1,j-1};
    }
    string longestPalindrome(string s) {
        int maxi=1;
        int start=0;
        int n = s.size();
        for(int i =0;i<n-1;i++){
            auto[a1,b1]=expansion(i,i,s);
            auto[a2,b2]=expansion(i,i+1,s);
            if(maxi<(b1-a1+1)){
                start=a1;
                maxi=b1-a1+1;
            }
            if(maxi<(b2-a2+1)){
                start=a2;
                maxi=b2-a2+1;
            }

        }
        return s.substr(start,maxi);
    }
};
