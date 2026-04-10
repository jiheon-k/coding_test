#include<iostream>
#include<vector>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int cnt=0, idx=0;
    int dp[1000001]={0};
    dp[1]=0;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+1;
        if(i%2==0)
            dp[i]=min(dp[i], dp[i/2]+1);
        if(i%3==0)
            dp[i]=min(dp[i], dp[i/3]+1);
    }

    cout<<dp[n]<<'\n';
    return 0;
}


// 16-8-4-2-1
// 16-15-5-4-3-1