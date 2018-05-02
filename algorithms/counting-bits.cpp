class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> result;
        result.push_back(0);
        
        if(num == 0)    return result;
        result.push_back(1);
        
        if(num == 1)    return result;
        
        int power_of_two = 2;
        
        for(int i = 2; i <= num; i++){
            if(i == power_of_two) {
                result.push_back(1);
                power_of_two *= 2;
            }  
            else{
                result.push_back(1 + result[i - power_of_two / 2]);
            }
            
        }
        
        return result;
    }
};