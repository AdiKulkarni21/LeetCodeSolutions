class Solution {
public:
    int tryrob(vector<int>& nums, int i, int& pre){
        if(i < 0)   return 0;
        int pre2 = 0;
        pre = tryrob(nums, i-1, pre2);
        return max(nums[i]+pre2,pre);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)  return 0;
        int p = 0;
        return tryrob(nums,n-1,p);
    }
};