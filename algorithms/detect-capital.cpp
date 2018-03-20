class Solution {
public:
    bool isAllUpperCase(string word){
        for(auto& it : word)    {
            if(it > 90) return false;
        }
        return true;
    }
    
    bool isAllLowerCase(string word){
        for(auto& it : word)    {
            if(it < 97) return false;
        }
        return true;
    }
    
    bool detectCapitalUse(string word) {
        if(isAllUpperCase(word) || isAllLowerCase(word))    return true;
        else{
            bool result = true;
            for(int i = 1; i < word.size(); i++){
                result *= (word[i] >= 97);
                if(!result) return false;
            }
        }
        return true;
    }
};