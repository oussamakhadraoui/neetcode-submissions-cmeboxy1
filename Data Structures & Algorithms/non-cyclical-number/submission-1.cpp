class Solution {
public:
    int count(int n ){
        int result=0;
        while(n){
            int rest=n%10;
            result=result+(rest*rest);
            n/=10;
        }
        return result;
    }
    bool isHappy(int n) {
        int slow= count(n);
        int fast=count(count(n));
        while(fast!=slow){
            slow=count(slow);
            fast=count(count(fast));
        }
        return slow==1;
    }
};
