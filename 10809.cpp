#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void){
    string s;
    cin>>s;
    vector<int> alp(26, -1);
    for(int i=0; i<s.size(); i++){
        int idx=s[i]-97;
        if(alp[idx]==-1)
            alp[idx]=i;
        else   
            continue;
    }
    for(int i=0; i<25; i++){
        cout<<alp[i]<<' ';
    }
    cout<<alp[25]<<'\n';
    return 0;
}