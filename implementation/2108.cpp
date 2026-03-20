#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    int freq[8001] = {0}; // -4000 ~ 4000

    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        freq[v[i] + 4000]++;
    }

    sort(v.begin(), v.end());

    // 1. 산술평균
    int avg = round((double)sum / n);

    // 2. 중앙값
    int middle = v[n / 2];

    // 3. 최빈값
    int max_cnt = 0;
    for(int i = 0; i < 8001; i++) {
        max_cnt = max(max_cnt, freq[i]);
    }

    int mode;
    bool first = true;
    for(int i = 0; i < 8001; i++) {
        if(freq[i] == max_cnt) {
            if(first) {
                mode = i - 4000;
                first = false;
            } else {
                mode = i - 4000;
                break;
            }
        }
    }

    // 4. 범위
    int range = v[n - 1] - v[0];

    cout << avg << '\n';
    cout << middle << '\n';
    cout << mode << '\n';
    cout << range << '\n';

    return 0;
}