class Solution {
public:
    bool isSelfDivisible(int n){
        string s = to_string(n);
        for(auto& it : s){
            if(it - 48 == 0)   return false;
            else if(n % (it - 48) != 0)  return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++){
            if(isSelfDivisible(i)) result.push_back(i);
        }
        return result;
    }
};