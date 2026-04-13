class Solution {
public:
    int bit(int n) {
        int result=0;
        while(n){
            result+=n&1;
            n=n>>1;
        }
        return result;
    }
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i =0;i<=n;i++){
            result.push_back(bit(i));
        }
        return result;
    }
};