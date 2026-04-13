class Solution {
public:
    int reverse(int x) {
        long long result = 0; // Use long long to catch overflow during calculation
        
        while (x != 0) {
            // Pop the last digit (handles both positive and negative)
            int pop = x % 10;
            x /= 10;
            
            // Push the digit onto the result
            result = result * 10 + pop;
            
            // Amazon/LeetCode constraint: Return 0 if it exceeds 32-bit int range
            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
        }
        
        return (int)result;
    }
};