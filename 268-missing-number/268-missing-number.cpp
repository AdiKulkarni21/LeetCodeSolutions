class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max=0,sum=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        { sum+=nums[i];
         if(nums[i]==0)
             flag=1;
            if(nums[i]>max)
                max=nums[i];
         }
        int sum2=0;
        
        for(int i=0;i<=max;i++)
        sum2+=i;
        if(flag==0)
            return 0;
        if((sum2-sum)==0)
        return max+1;
        else
            return sum2-sum;
    }
};