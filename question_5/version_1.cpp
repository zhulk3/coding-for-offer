class Solution {
public:
    string replaceSpace(string s) {
        int len=s.length();
        string t;
        for(int i=0;i<len;i++){
            if(s[i]==' ')
            t+="%20";
            else
            t=t+s[i];
        }
        return t;
    }
};