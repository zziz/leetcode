class Solution {
private:
     map<int, string> m;
public:
    Solution(){
        m.insert(pair<int, string>(1000, "M"));
        m.insert(pair<int, string>(900, "CM"));
        m.insert(pair<int, string>(500, "D"));
        m.insert(pair<int, string>(400, "CD"));
        m.insert(pair<int, string>(100, "C"));
        m.insert(pair<int, string>(90, "XC"));
        m.insert(pair<int, string>(50, "L"));
        m.insert(pair<int, string>(40, "XL"));
        m.insert(pair<int, string>(10, "X"));
        m.insert(pair<int, string>(9, "IX"));
        m.insert(pair<int, string>(5, "V"));
        m.insert(pair<int, string>(4, "IV"));
        m.insert(pair<int, string>(1, "I"));
    }
    
    string intToRoman(int num) { 
        int l =  m.lower_bound(num)->first;
        if(l !=  num) l = prev(m.lower_bound(num))->first;
        if ( num == l ) {
            return m[num];
        }
        return m[l] + intToRoman(num - l);
        
    }
};