class Solution {
public:
    int countSubstrings(string s) {
        
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = i + 1; j < s.length() + 1; j++){
                string ss = s.substr(i, j - i);
                string rss = ss;
                reverse(rss.begin(), rss.end());
                if(rss == ss)   count++;
            }
        }
        
        return count;
        
    }
};