class Solution {
public:
    bool oneDiff(string a, string b){
        int count = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i])    count++;
            if(count > 1)   return false;
        }
        if(count == 1)  return true;
        else    return false;
    }
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(), wordList.end(), endWord) == wordList.end())   return 0;
        queue<string> bfs;
        queue<string> temp;
        int lvl = 1;
        bfs.push(endWord);
        remove(wordList.begin(), wordList.end(), endWord);
        
        while(!bfs.empty()){
            string s = bfs.front(); bfs.pop();
            if(oneDiff(beginWord, s))   return lvl+1;
            for(auto& str : wordList){
                if(oneDiff(str, s)) {
                    temp.push(str);
                    remove(wordList.begin(), wordList.end(), str);
                }
            }
            
            if(bfs.empty()){
                if(!temp.empty()) lvl++;
                while(!temp.empty()){
                    string ts = temp.front(); temp.pop();
                    bfs.push(ts);
                }
            }
        }
        return 0;
    }
};