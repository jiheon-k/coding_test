#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> list;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        list.push_back(x);
    }

    sort(list.begin(), list.end());
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=(list[i]*(n-i));
    }
    cout<<ans<<'\n';
    return 0;
}