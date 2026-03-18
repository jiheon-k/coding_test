#include<iostream>
using namespace std;

int main(void){
    int a, b, c;
    cin>>a>>b>>c;
    int ans=a*b*c;
    cout<<ans<<'\n';
    int arr[10]={0};
    while(ans!=0){
        int x=ans%10;
        ans=ans/10;
        arr[x]++;
    }
    for(int i=0; i<10; i++)
        cout<<arr[i]<<'\n';
}