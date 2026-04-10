#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    set<string> listen;
    set<string> seen;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        listen.insert(s);
    }
    for(int i=0; i<m; i++){
        string s;
        cin>>s;
        seen.insert(s);
    }
    set<string> result;
    for(string s:listen){
        if(seen.find(s)!=seen.end()){
            result.insert(s);
        }
    }
    cout<<result.size()<<'\n';
    for(string s:result)
        cout<<s<<'\n';
    return 0;
}