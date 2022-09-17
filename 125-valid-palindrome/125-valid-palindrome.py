class Solution:
    def isPalindrome(self, s: str) -> bool:
        x=''
        for i in s:
         if i.isalnum():
          x=x+i
         
        x=x.lower()  
        
        if(x==x[::-1]):
         return 1
        else:
         return 0   