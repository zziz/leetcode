class Solution {
public:
    int findComplement(int num) {
        string s = bitset<32>(num).to_string();
        bool start = false;
        int i = 0, result = 0, sz = s.size();
        for(auto & it : s){
            i++;
            if(start){
                if(it == '0')   result += pow(2, sz - i);
                continue;
            }
            if(it == '1')   start = true;
        }
        return result;
    }
};