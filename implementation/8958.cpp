#include<iostream>
#include<string>
using namespace std;

int main(void){
    int T;
    cin>>T;
    while (T>0)
    {
        string str;
        cin>>str;
        int res=0, offset=1;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='O'){
                res+=offset;
                offset++;
            }
            else if(str[i]=='X'){
                offset=1;
            }
        }
        cout<<res<<'\n';
        T--;
    }
    
}