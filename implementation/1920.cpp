#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
  
    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        if(s.find(x)!=s.end())
            cout<<"1"<<'\n';
        else
            cout<<"0"<<'\n';
    }
    return 0;
}