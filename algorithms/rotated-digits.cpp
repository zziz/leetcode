class Solution {
public:
    bool isGoodNumber(int n){
        string str = to_string(n);
        bool candidate = false;
        for(auto& it : str){
            if(it == '0' || it == '1' || it == '8')                 continue;
            else if(it == '2' || it == '5' || it == '6' || it == '9')    candidate = true;
            else    {
                candidate = false;
                break;
            }
        }
        return candidate;
    }
    int rotatedDigits(int N) {
        int result = 0;
        //cout << isGoodNumber(2) << endl;
        for(int i = 0; i <= N; i++)
            if(isGoodNumber(i)) result++;
        return result;
    }
};