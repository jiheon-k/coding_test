#include<iostream>
#include<vector>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> size;
    for(int i=0; i<6; i++){
        int x;
        cin>>x;
        size.push_back(x);
    }
    int T,P;
    cin>>T>>P;
    int need_T=0;
    for(int i=0; i<6; i++){
        int x=size[i]/T;
        int y=size[i]%T;
        if(y==0)
            need_T+=x;
        else
            need_T+=x+1;
    }
    int need_P=0, k=0;
    need_P=n/P;
    k=n%P;
    cout<<need_T<<'\n'<<need_P<<" "<<k<<'\n';
    return 0;
}