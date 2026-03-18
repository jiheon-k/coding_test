#include<iostream>
#include<string>
using namespace std;

int main(void){
    int n, idx;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<(n-i); j++)
            cout<<" ";
        for(int k=n-i+1; k<=n; k++)
            cout<<"*";
        cout<<'\n';
    }
    return 0;
}