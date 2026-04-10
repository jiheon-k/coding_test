#include <iostream>
#include <queue>
using namespace std;

int N, M;
int map[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> M >> N;
    queue<pair<int,int>> q;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
            if(map[i][j] == 1) q.push({i, j});  // 모든 익은 토마토를 초기에 큐에 삽입
        }

    int cnt = 0;
    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k], ny = y + dy[k];
            if(nx >= 0 && nx < N && ny >= 0 && ny < M && map[nx][ny] == 0){
                map[nx][ny] = map[x][y] + 1;  // 날짜를 값으로 저장
                cnt = max(cnt, map[nx][ny] - 1);
                q.push({nx, ny});
            }
        }
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            if(map[i][j] == 0){ cout << -1; return 0; }

    cout << cnt;
    return 0;
}