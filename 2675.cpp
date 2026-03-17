#include<iostream>
using namespace std;

int main(void){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int r;
        string s;
        cin>>r>>s;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<r; j++)
                cout<<s[i];
        }
        cout<<'\n';
    }
}