#include<iostream>
using namespace std;
long long ans=0;

void slove(long long size, long long r, long long c){
    if(size==1)
        return;

    long long half=size/2;
    if(r<half && c<half){

    }
    else if(r<half && c>=half){
        ans+=half*half;
        c-=half;
    }
    else if(r>=half && c<half){
        ans+=half*half*2;
        r-=half;
    }
    else{
        ans+=half*half*3;
        r-=half;
        c-=half;
    }
    slove(half, r, c);
}
int main(void){

    int N, r, c;
    cin>>N>>r>>c;

    slove(1LL<<N, r, c);
    cout<<ans<<'\n';
    return 0;
}