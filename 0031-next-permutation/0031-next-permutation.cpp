class Solution {
public:
void nextPermutation(vector<int>& nums) {     
int size=nums.size();
--size;
if(size==0)return;
while(size--) {
  if(nums[size+1]>nums[size])
 {
for(int i=nums.size()-1;i>=0;--i){
  if(nums[i]>nums[size]){
swap(nums[size],nums[i]);
 break;
  }
   }
reverse(nums.begin()+(size+1),nums.end());
return;
     }
}
if(size==-1){
  reverse(nums.begin(),nums.end());
  return;
     }
     
   }
};