class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels {'a', 'e', 'o', 'i', 'u', 'A', 'E', 'O', 'I', 'U'};
        vector<char> vowelsInWord;
        for(auto& it : s){
            if(vowels.find(it) != vowels.end()) vowelsInWord.push_back(it);
        }
        reverse(vowelsInWord.begin(), vowelsInWord.end());
        string result;
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(vowels.find(s[i]) != vowels.end()) {
                result.push_back(vowelsInWord[j]);
                j++;
            }
            else
                result.push_back(s[i]);
        }
        return result;
    }
};
