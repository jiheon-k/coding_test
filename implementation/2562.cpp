#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> v;
    for(int i=0; i<9; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=v[0];
    int idx=0;
    for(int i=0; i<9; i++){
        if(v[i]>max){
            max=v[i];
            idx=i;
        }
    }
    cout<<max<<'\n'<<idx+1<<'\n';
}