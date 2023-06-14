class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
    for(int i = 1; i <= numRows; i++){
        vector<int>temp;
        int ans = 1;
        temp.push_back(ans);
        for(int col = 1; col <i; col++) {
            ans = (ans * (i - col))/col;
            temp.push_back(ans);
        }
        
        res.push_back(temp);
    }
return res;
        
    }
};