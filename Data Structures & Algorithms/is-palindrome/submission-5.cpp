class Solution {
public:
    bool isPalindrome(string s) {
        int i =0;
        int j =s.size();
        while(i<=j){
            while(s[i]==' '|| !isalnum(s[i]))i++;
            while(s[j]==' '|| !isalnum(s[j]))j--;
            if(i>j)return true;
            if(tolower(s[i])!=tolower (s[j]))return false;

            i++;
            j--;

        }
        return true;
    }
};
