#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    unordered_map<string, string> list;
    for(int i=0; i<n; i++){
        string a, b;
        cin>>a>>b;
        list[a]=b;
    }
    
    for(int i=0; i<m; i++){
        string s;
        cin>>s;
        cout<<list[s]<<'\n';
    }

    return 0;
}