//不修改数组

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int *temp=new int [len];
        for(int i=0;i<len;i++)
        temp[i]=-1;
        for(int i=0;i<len;i++){
            if(temp[i]==nums[i])
            return nums[i];
            nums[nums[i]]=nums[i];
        }
        return 0;
    }
};