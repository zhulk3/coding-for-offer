class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=i){
                if(nums[i]==nums[nums[i]]){
                    ans=nums[i];
                    return ans;
                }
                
                int temp=nums[i];
                nums[i]=nums[nums[i]];
                nums[temp]=temp;
            }
        }
        
        return ans;
    }
};