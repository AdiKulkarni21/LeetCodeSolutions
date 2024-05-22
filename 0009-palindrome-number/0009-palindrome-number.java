class Solution {
    public boolean isPalindrome(int x) {
        int a=0;
        
        if(x<0){
         return false;
        }
        int b=x;
        while(x!=0){
             a=a*10+x%10;
             x=x/10;
            
        }
       return a==b;
    }
}