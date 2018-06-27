class Solution {
public:
    string rotate(string s, int n){
        return s.substr(n, s.size() - 1) + s.substr(0, n);
    }
    
    bool rotateString(string A, string B) {        
        for(int i = 0; i < A.size(); i++){
            if(B == rotate(A, i))   return true;
        }
        return false;
    }
};