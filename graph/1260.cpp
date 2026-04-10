#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[1001];
bool visited[1001];

void dfs(int x)
{
    visited[x] = true;
    cout << x << " ";
    for (int i : graph[x])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    visited[x]=true;
    while(!q.empty()){
        int v=q.front();
        cout<<v<<" ";
        q.pop();
        for(int next:graph[v]){
            if(!visited[next]){
                visited[next]=true;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    sort(graph[i].begin(), graph[i].end());
    dfs(v);
    cout<<'\n';
    memset(visited, false, sizeof(visited));
    bfs(v);
    cout<<'\n';
    return 0;
}