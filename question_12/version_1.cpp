#include<string.h>
#include<stdio.h>

bool coreFunc(char*matrix,int rows,int cols,char*str,int row,int col,int pathlength,bool*visited){
    if(str[pathlength]=='\0')
    return true;
    bool haspath=false;
    if(row>=0&&row<rows&&col>=0&&col<cols&&matrix[row*cols+col]==str[pathlength]&&(!visited[cols*row+col])){
        pathlength++;
        visited[row*cols+col]=true;
        haspath=coreFunc(matrix,rows,cols,str,row+1,col,pathlength,visited)||coreFunc(matrix,rows,cols,str,row-1,col,pathlength,visited)||
        coreFunc(matrix,rows,cols,str,row,col+1,pathlength,visited)||coreFunc(matrix,rows,cols,str,row,col-1,pathlength,visited);
        if(!haspath){
            visited[row*cols+col]=false;
            --pathlength;
        }
    }
    return haspath;
}

class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if (matrix==nullptr||rows<1||cols<1||str==nullptr)
        {
            return false;
        }
        bool *visited=new bool[rows*cols];
        memset(visited,0,rows*cols);
        int pathlength=0;
        for(int row=0;row<rows;++row){
            for(int col=0;col<cols;++col){
                if(coreFunc(matrix,rows,cols,str,row,col,pathlength,visited))
                return true;
            }
        }
        delete[] visited;
        return false;
    }
};