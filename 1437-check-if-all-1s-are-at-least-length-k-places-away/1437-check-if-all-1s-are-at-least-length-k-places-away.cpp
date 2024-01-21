class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if (nums.empty()) {
            return false;
        }
        int a = 0;
        int temp =0;
        vector<int> b;
        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (*i == 1){
                a++;
                if(a>1){
                b.push_back(temp);
                temp=0;}
            }
            if (a > 0 && *i == 0) {
                temp++;
            }
        }

        for (int i = 0; i < (b.size()); ++i) {
          
              if (b[i] < k)
                return false;

        }

        return true;
    }
};
