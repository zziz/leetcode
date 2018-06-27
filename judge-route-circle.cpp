class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        cout << moves << endl;
        for(auto& it : moves){
            if(it == 'R')       x++;
            else if(it == 'L')  x--;
            else if(it == 'U')  y++;
            else if(it == 'D')  y--;
            else{
                cout << "Not valid movement" << endl;
                return false;
            }
        }
        if(x == 0 && y == 0)    return true;
        else                    return false;
    }
};