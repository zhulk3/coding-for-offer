class Solution {
public:
    int integerBreak(int n) {
        if(n<2)
        return 0;
        if(n=2)
        return 1;
        if(n=3)
        return 2;
        int *store=new int[n+1];
        store[0]=0;
        store[1]=1;
        store[2]=2;
        store[3]=3;
        int max=0;
        for(int i=4;i<=n;i++){
            max=0;
            for(int j=1;j<=i/2;j++){
                int pro=store[j]+store[i-j];
                if(pro>max)
                max=pro;
            }
            store[i]=max;
        }
        max=store[n];
        delete[] store;
        return max;
    }
};