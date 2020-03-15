class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if(nums.size()==0)
        return nums;
        int odd=0;
        int even=nums.size()-1;
        int temp=0;
        while(odd!=even){
            if(nums[odd]%2==0){
                temp=nums[even];
                nums[even]=nums[odd];
                nums[odd]=temp;
                even--;
            }
            else
            odd++;
        }
        return nums;
    }
};