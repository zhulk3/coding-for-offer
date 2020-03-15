class Solution {
public:
    int hammingWeight(uint32_t n) {
    int cnt=0;
        unsigned int flag=1;
        while(flag){
            if(flag&n)
                cnt++;
                flag=flag<<1;
        }
        return cnt;
    }
};