#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int dist[100001];

int bfs(int start, int des){
    queue<int> q;
    fill(dist, dist + 100001, -1);
    dist[start] = 0;
    q.push(start);

    while(!q.empty()){
        int x = q.front();
        q.pop();

        if(x == des) return dist[x];

        int next[] = {x + 1, x - 1, x * 2};
        for(int nx : next){
            if(nx >= 0 && nx < 100001 && dist[nx] == -1){
                dist[nx] = dist[x] + 1;
                q.push(nx);
            }
        }
    }
    return -1;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    cout << bfs(n, k) << '\n';

    return 0;
}