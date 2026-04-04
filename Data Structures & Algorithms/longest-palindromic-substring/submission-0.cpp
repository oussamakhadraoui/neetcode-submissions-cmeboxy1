class Solution {
public:
    pair<int,int> expansion(int i, int j, const string& s) {
        while (i >= 0 && j < s.size() && s[i] == s[j]) {
            i--;
            j++;
        }
        return {i + 1, j - 1};
    }
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 1) return s;
int start = 0, maxi = 1;
        for (int i = 0; i < n - 1; i++) {
            auto [l1, r1] = expansion(i,   i,   s);  
            auto [l2, r2] = expansion(i,   i+1, s);

            if (r1 - l1 + 1 > maxi) { maxi = r1 - l1 + 1; start = l1; }
            if (r2 - l2 + 1 > maxi) { maxi = r2 - l2 + 1; start = l2; }
        }

        return s.substr(start, maxi);
    }
};
