class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int sum_Omax=nums[0];
        int sum_Cmax=nums[0];
        for( auto i=nums.begin()+1;i<nums.end();i++)
        {
          if(sum_Cmax>= 0 ){
                sum_Cmax =  sum_Cmax +*i;
          }
            else
            {
                sum_Cmax=*i;
            }
            sum_Omax=max(sum_Omax,sum_Cmax);
        }
    return sum_Omax;
    }
    
};