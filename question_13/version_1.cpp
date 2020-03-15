int getDiget(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

bool check(int m,int n,int k,int row,int col,bool*visited){
    if(row<m&&row>=0&&col<=n&&col<=n&&!visited[row*n+col]){
        if(getDiget(row)+getDiget(col)<=k)
        return true;
    }
    return false;
}

int coreFunc(int m,int n,int k,int row,int col,bool*visited){
    int count=0;
    if(check(m,n,k,row,col,visited)){
        visited[row*n+col]=true;
        ++count;
        count=count+coreFunc(m,n,k,row+1,col,visited)+coreFunc(m,n,k,row-1,col,visited)+coreFunc(m,n,k,row,col+1,visited)+coreFunc(m,n,k,row,col-1,visited);
    }
     return count;
}

class Solution {
public:
    int movingCount(int m, int n, int k) {
        if(m<=0||n<=0||k<0)
        return 0;
        bool*visited=new bool[m*n];
        for(int i=0;i<m*n;i++)
        visited[i]=false;
        int count=check(m,n,k,0,0,visited);
        delete[] visited;
        return count;
    }
};