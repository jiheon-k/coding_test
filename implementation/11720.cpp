#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int a, res=0;
    cin>>a;
    string s;
    cin>>s;

    for(int i=0; i<a; i++){
        res+=s[i]-'0';
    }
    cout<<res<<endl;
}

