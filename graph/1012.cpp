#include <iostream>
#include <cstring>
using namespace std;

int map[51][51];
bool visited[51][51];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int M, N;

void dfs(int x, int y) {
    visited[x][y] = true;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < M && ny < N && !visited[nx][ny] && map[nx][ny] == 1)
            dfs(nx, ny);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));

        int K;
        cin >> M >> N >> K;

        for(int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
        }

        int cnt = 0;
        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                if(map[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    cnt++;
                }

        cout << cnt << '\n';
    }
    return 0;
}