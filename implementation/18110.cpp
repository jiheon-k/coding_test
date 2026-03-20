#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;
    vector<int> v;
    if(n==0){
        cout<<ans<<'\n';
        return 0;
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(v.size()==1){
        cout<<v[0]<<'\n';
        return 0;
    }
    if(v.size()==2){
        cout<<round((v[0]+v[1])/2)<<'\n';
        return 0;
    }
    sort(v.begin(), v.end());
    int one;
    one=round((float)n*0.15);
    float total=0;
   
    for(int i=one; i<(n-one); i++)
        total+=v[i];
    cout<<round(total/(n-one-one))<<'\n';
    return 0;
}