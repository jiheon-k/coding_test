#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second; });

    int cnt = 1, finish_t = v[0].second;
    for (int idx=1; idx < n; idx++)
    {
        if (v[idx].first >= finish_t)
        {
            finish_t = v[idx].second;
            cnt++;
        }
    }

    cout << cnt << "\n";
    return 0;
}