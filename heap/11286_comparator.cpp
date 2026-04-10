#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    auto cmp = [](int a, int b)
    {
        if (abs(a) != abs(b))
            return abs(a) > abs(b);
        return a > b;   // a가 b보다 크다면 a의 우선순위가 b의 우선순위보다 낮다
    };
    priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
                cout << 0 << "\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
        return 0;
    }
}