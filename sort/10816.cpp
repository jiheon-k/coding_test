#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cin>>m;
    vector<int> res(m);
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        auto it_=lower_bound(a.begin(), a.end(), x);
        auto _it=upper_bound(a.begin(), a.end(), x);
        int start=it_-a.begin();
        int end=_it-a.begin();
        res[i]=end-start;
    }
    
    for(int i=0; i<m; i++){
        if(i==m-1)
            cout<<res[i]<<'\n';
        else    
            cout<<res[i]<<" ";
    }
    return 0;
}