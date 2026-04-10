#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<string>
#include<unordered_map>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<string> numToName(n+1);
    unordered_map<string, int> nameTonum;
    for(int i=1; i<=n; i++){
        string str;
        cin>>str;
        numToName[i]=str;
        nameTonum[str]=i;
    }

    while(m--){
        string s;
        cin>>s;
        if(isdigit(s[0])){
            int num=stoi(s);
            cout<<numToName[num]<<'\n';
        }
        else{
            cout<<nameTonum[s]<<'\n';
        }
    }
    
    return 0;
}