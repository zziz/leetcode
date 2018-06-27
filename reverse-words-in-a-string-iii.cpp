class Solution {
public:
    string reverseWords(string s) {
        string result, word;
        for(auto& it : s){
            if(it == ' '){
                reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            }
            else
                word += it;
        }
        reverse(word.begin(), word.end());
        result += word;
        return result;
    }
};