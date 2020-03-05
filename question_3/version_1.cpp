class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        map<int,int>::iterator ptr;
        pair<int,int>middle;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(mp.find(nums[i])==mp.end()){
                middle.first=nums[i];
                middle.second=1;
                mp.insert(middle);
            }
            else
                return nums[i];
        }
        
        return ans;
    }
};