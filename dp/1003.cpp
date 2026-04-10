#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 미리 다 계산
    int zero[41] = {}, one[41] = {};
    zero[0] = 1; one[0] = 0;  // f(0) → 0 한번, 1 zero번
    zero[1] = 0; one[1] = 1;  // f(1) → 0 zero번, 1 한번

    for(int i = 2; i <= 40; i++){
        zero[i] = zero[i-1] + zero[i-2];
        one[i]  = one[i-1]  + one[i-2];
    }

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cout << zero[n] << " " << one[n] << '\n';
    }

    return 0;
}