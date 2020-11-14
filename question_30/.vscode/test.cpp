#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isNum(char c){
    if(c>='0'&&c<='9')
    return true;
    return false;
}

int main(){
    string str;
    cin>>str;
    vector<string>answer;
    int len=str.length();
    for(int i=0;i<len-3;i++){
        char c=str[i];
        if(c>'3'||c<'1')
        continue;
        else{
            char c1=str[i+1];
            char c2=str[i+2];
            char c3=str[i+3];
            if(isNum(c1)&&isNum(c2)&&isNum(c3)){
                string one;
                one.push_back(c);
                one.push_back(c1);
                one.push_back(c2);
                one.push_back(c3);
                answer.push_back(one);
                i+=3;
            }
        }
    }
    for(int i=0;i<answer.size();i++){
        cout<<answer[i];
        if(i+1<answer.size())
        cout<<' ';
    }
    return 0;
}
