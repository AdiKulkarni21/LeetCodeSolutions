class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,flag=0;
        for(int i =s.length()-1;i>=0;i--){
            if(int(s[i])!=32)
                flag=1;
            if(flag==1)
            {
             if(int(s[i])==32)
                 break;
             count++;
            }
        }
      return count;  
    }
};