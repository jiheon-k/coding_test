#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int check(int a){
    if(a==1)
        return 0;
    int x;
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n, res=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        res+=check(x);
    }
    cout<<res<<'\n';
}