class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==0) return INT_MAX;
        if(dividend==-2147483648&&divisor==-1){
            return 2147483647;
        }
        if(dividend>2147483648){
            return 2147483647;
        }
        if(dividend<-2147483648){
            return -2147483647;
        }
        int ans =dividend/divisor;
        return ans;
        
    }
};