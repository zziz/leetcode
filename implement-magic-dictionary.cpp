class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        m = dict;
    }
    
    int charDiff(string a, string b){
        int diff = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]) diff++;
        }
        return diff;
        
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(auto w : m){
            if(word.size() != w.size()) continue;
            if(charDiff(word, w) == 1)  return true;
        }
        return false;
    }
    
private:
    vector<string> m;
    
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */