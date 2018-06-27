class Solution {
public:
    string toGoatLatin(string S) {
        string result = "";
        string token = "";
        int index = 1;
        for(int i = 0; i < S.size(); i++){
            if(S[i] != ' ')    token += S[i];
            if(S[i] == ' ' || i == S.size() - 1){
                if(token[0] == 'a' || token[0] == 'A' || 
                   token[0] == 'e' || token[0] == 'E' ||
                   token[0] == 'i' || token[0] == 'I' ||
                   token[0] == 'o' || token[0] == 'O' ||
                   token[0] == 'u' || token[0] == 'U'){
                    token += "ma";
                    
                }
                else{
                    string tmp = token;
                    token = tmp.substr(1, tmp.size() - 1);
                    token += tmp[0];
                    token += "ma";
                }
                
                for(int j = 0; j < index; j++)  token += "a";
                if(index > 1) result += " ";
                result += token;
                token = "";
                index++;
            }
        }
        return result;
    }
};