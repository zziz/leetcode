class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;                   // negative number cannot be palindrome
        int rev = 0, y = x;
        while (y) {
            int temp = rev * 10 + y % 10;
            if (temp / 10 != rev)   return false;   // prevent overflow
            rev = temp;
            y /= 10;
        }
        if(rev == x)    return true;
        else return false;
        
    }
};