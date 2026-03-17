#include<iostream>
using namespace std;

int main(void){
    string s;
    getline(cin, s);
    int res=0, idx=-1;
    for(int i=0; i<s.size(); i++)
        if(s[i]!=' ' && (i==0 || s[i-1]==' '))
            res++;
    cout<<res<<endl;
    return 0;
}