class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(auto it=nums.begin();it<nums.end();++it){
            count++;
            if(*it==val){
          nums.erase(it);  
                it--;
            }
        }
     return nums.size();
    }
};