#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 10; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<dp[n]<<'\n';
    }

    return 0;
}



