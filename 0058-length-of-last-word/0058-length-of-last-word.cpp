class Solution {
public:
    int lengthOfLastWord(string s) {
        
   
        int count=0;
        if(!s.empty()){
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ') {
                continue;
            }
            else if(s[i]!=' '){
                count++;
                if(i==0 || s[i-1]==' ')
                return count;
            }
            
        }
    
    }
    return count;
    }
};