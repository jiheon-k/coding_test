#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int stairs[301];
    for(int i=1; i<=n; i++)
        cin>>stairs[i];
        
    int dp[301][2]={};

    dp[1][0]=stairs[1];
    dp[1][1]=0;
    dp[2][0]=stairs[2];
    dp[2][1]=stairs[1]+stairs[2];
    for(int i=3; i<=n; i++){
        dp[i][0]=max(dp[i-2][0], dp[i-2][1])+stairs[i];
        dp[i][1]=dp[i-1][0]+stairs[i];
    }
    cout<<max(dp[n][0], dp[n][1])<<'\n';

    return 0;
}