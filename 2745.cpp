#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int res=0;
    for(int i=0; i<5; i++){
        int a;
        cin>>a;
        res+=(a*a);
    }
    cout<<res%10<<endl;
}