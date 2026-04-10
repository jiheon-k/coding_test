#include<iostream>
#include<vector>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int cnt=0;
    for(int i=n-1; i>=0; i--){
        if(v[i]<=k){
            int a=k/v[i];
            cnt+=a;
            k=k-(v[i]*a);
            if(k==0){
                cout<<cnt<<'\n';
                return 0;
            }
        }
        else 
            continue;
    }

    return 0;
}