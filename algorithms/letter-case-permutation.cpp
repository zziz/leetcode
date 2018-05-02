class Solution {
public:
    void permute (string S, vector<string>& result, int index)
    {
        
      //  cout <<S << " ";
        result.push_back(S);
        
        if(index >= S.size())
            return;      
        
        for (int i = index ; i < S.size(); i++)
        {
            if (isalpha(S[i]))
            {
                S[i] ^= 32;
                permute (S, result, i+1);
                S[i] ^= 32;
            }
        }
    }
    
    vector<string> letterCasePermutation(string S) 
    {
        vector<string> result;
        permute(S, result, 0);
        return result;
    }
};