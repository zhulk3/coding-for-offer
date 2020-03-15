class Solution {
public:
    int fib(int N) {
        int one=0;
        int two=1;
        if(N==one)
        return one;
        if(N==two)
        return two;
        int ans=0;
        for(int i=2;i<=N;i++){
            ans=one+two;
            one=two;
            two=ans;
        }
        return ans;
    }
};