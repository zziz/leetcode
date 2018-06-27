class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x ^ y, result = 0;
        std::string binary = std::bitset<32>(diff).to_string();
        for(auto& it : binary){
            if(it == '1') result++;
        }
        return result;
    }
};