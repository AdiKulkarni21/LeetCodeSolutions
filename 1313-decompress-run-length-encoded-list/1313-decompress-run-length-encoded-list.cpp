class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i=i+2){
            for(int j=1;j<=nums[i];j++){
                a.push_back(nums[i+1]);
            }
            
        }
        return a;
    }
};