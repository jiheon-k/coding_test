#include<iostream>
using namespace std;

int main(void){
    int arr[42]={0};
    for(int i=0; i<10; i++){
        int x;
        cin>>x;
        int a=x%42;
        arr[a]++;
    }
    int res=0;
    for(int i=0; i<42; i++)
        if(arr[i]!=0)
            res++;

    cout<<res<<'\n';
}