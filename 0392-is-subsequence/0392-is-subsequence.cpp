class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> stack;
        for(int i=0;i<s.length();i++)
            stack.push(s[i]);
    
for(int i=t.length()-1;i>=0;i--)
    if(!stack.empty() && (stack.top()==t[i]))
      stack.pop();
  
  return stack.empty();
    }
};