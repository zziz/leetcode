class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> first {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        set<char> second {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
        set<char> third { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        set<char> word;
        vector<string> result;
        for(auto& i : words){
            auto ip = i;
            std::transform(ip.begin(), ip.end(), ip.begin(), ::tolower);
            for(auto& j : ip){
                word.insert(j);
            }

            if(includes(first.begin(), first.end(), word.begin(), word.end()) || 
               includes(second.begin(), second.end(), word.begin(), word.end()) ||
               includes(third.begin(), third.end(), word.begin(), word.end())) result.push_back(i);
            word.clear();
        }
        return result;
    }
};