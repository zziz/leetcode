class Solution {
public:
    
    int divide(int dividend, int divisor) {
        
       if (divisor == 0)    return INT_MAX;      
       if (divisor == -1 && dividend == INT_MIN) return  INT_MAX;        
        
       int negative = ((dividend > 0) ^ (divisor > 0));
       long dd = abs((long) dividend), ds = abs((long) divisor); 
       long current =1,ans=0;
        
       do {
            ds <<= 1;
            current <<= 1;
        }while (dd >= ds); 

        while (current!=0) {
            if ( dd >= ds) {
                dd -= ds;
                ans |= current;
            }
            current >>= 1;
            ds >>= 1;
        } 

        
        return negative? -ans:ans;       
        
        
    }
		
};