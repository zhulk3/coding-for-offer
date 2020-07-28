class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0x80000000;
        int curSum=0;
        for(int i=0;i<nums.size();i++){
            if(curSum<=0)
            curSum=nums[i];
            else
            curSum+=nums[i];
            if(curSum>ans)
            ans=curSum;
        }
        return ans;
    }
};