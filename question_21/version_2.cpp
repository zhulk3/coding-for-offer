class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if(nums.size()==0)
        return nums;
        int odd=0;
        int even=nums.size()-1;
        int temp=0;
        while(odd!=even){
            if(nums[odd]%2!=0)
                odd++;
            else if(nums[even]%2==0)
            even--;
            else{
                temp=nums[odd];
                nums[odd]=nums[even];
                nums[even]=temp;
            }

            
            
        }
        return nums;
    }
};