class Solution {
public:
    int pal(int i ,int j ,string s){
        int count=0;
        while(i>=0&&j<s.size()&&s[i]==s[j]){
            i--;
            j++;
            count++;

        }
        return count;
    }
    int countSubstrings(string s) {
        int result=0;
        int n = s.size();
        if(n==1)return 1;
        for(int i =0;i<n;i++){
            result+=pal(i,i+1,s);
            result+=pal(i,i,s);


        }
        return result;
    }
};
