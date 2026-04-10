#include<iostream>
#include<algorithm>
#include<unordered_map> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        unordered_map<string, int> fashion;
        for(int i=0; i<n; i++){
            string a, b;
            cin>>a>>b;
            fashion[b]++;
        }
        int res=1;
        for(auto& p:fashion)
            res*=(p.second+1);
        res--;
        cout<<res<<'\n';
    }
    return 0;
}



