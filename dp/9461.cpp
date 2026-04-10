#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long dp[101]={0};
        dp[1]=1;
        dp[2]=1;
        dp[3]=1;
        dp[4]=2;
        for(int i=5; i<=n; i++)
            dp[i]=dp[i-2]+dp[i-3];
        cout<<dp[n]<<'\n';
    }
    return 0;
}