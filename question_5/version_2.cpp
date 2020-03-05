void replaceBlank(char string[],int len){
    if(len<=0)
    return ;
    int cnt=0;
    int originnal=0;
    int after=0;
    while (string[i]!='\0')
    {
        originnal++;
        if(string[i]==' ')
        cnt++;
        ++i;

    }
    after=originnal+cnt*2;
    while (originnal<after&&originnal>=0)
    {
        if(string[originnal==' ']{
            string[after--]='%';
            string[after--]='2';
            string[after--]='0';
        })else
        {
            string[after--]=string[originnal--];
        }
        

        
    }
    
    
    
    

}