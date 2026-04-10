#include<iostream>
#include<queue>
using namespace std;

int n, m;
int map[1001][1001];
int dist[1001][1001];
bool visited[1001][1001];
int move_x[4] = {0, 0, 1, -1};
int move_y[4] = {1, -1, 0, 0};

void bfs(int a, int b){
    queue<pair<int,int>> q;
    q.push({a, b});
    visited[a][b] = true;
    dist[a][b] = 0;

    while(!q.empty()){
        auto [r, c] = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int nr = r + move_x[i];
            int nc = c + move_y[i];
            if(nr < 1 || nc < 1 || nr > n || nc > m) continue;
            if(visited[nr][nc]) continue;
            if(map[nr][nc] == 0) continue;
            q.push({nr, nc});
            visited[nr][nc] = true;
            dist[nr][nc] = dist[r][c] + 1;
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int a, b;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin >> map[i][j];
            if(map[i][j] == 2)
                a = i, b = j;
        }

    // dist 배열 -1로 초기화
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            dist[i][j] = -1;

    bfs(a, b);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(map[i][j] == 0) cout << 0;
            else cout << dist[i][j];
            if(j != m) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}