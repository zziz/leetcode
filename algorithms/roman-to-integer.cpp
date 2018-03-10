class Solution {
public:
    int decodeSingle(char letter) {
        switch (letter) {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
            default:
                return 0;
        }
    }

    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (decodeSingle(s[i]) < decodeSingle(s[i + 1])) {
                result -= decodeSingle(s[i]);
            } else {
                result += decodeSingle(s[i]);
            }
        }
        result += decodeSingle(s[s.length() - 1]);
        return result;
    }
};