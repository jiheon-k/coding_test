#include <iostream>
using namespace std;
int map[501][501];
int ans;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool visited[501][501];
int N, M;
void dfs(int x, int y, int depth, int sum){
    if(depth==4){
        ans=max(ans, sum);
        return;
    }

    for(int i=0; i<4; i++){
        int nx=x+dx[i], ny=y+dy[i];
        if(nx>=0 && nx<N && ny>=0 && ny<M && !visited[nx][ny]){
            visited[nx][ny]=true;
            dfs(nx,ny,depth+1,sum+map[nx][ny]);
            visited[nx][ny]=false;
        }
    }
}

void checkExtra(int x, int y){
    for(int i=0; i<4; i++){
        int nx=x+dx[i], ny=y+dy[i], sum=0;
        if(nx>=0 && nx<N && ny>=0 && ny<M){
            if(i==0 || i==1){
                if(nx+1<N && nx-1>=0){
                    sum=map[nx][ny]+map[x][y]+map[nx+1][ny]+map[nx-1][ny];
                    ans=max(ans, sum);
                }
            }
            if(i==2 || i==3){
                if(ny+1<M && ny-1>=0){
                    sum=map[nx][ny]+map[x][y]+map[nx][ny+1]+map[nx][ny-1];
                    ans=max(ans, sum);
                }
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>N>>M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> map[i][j];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            visited[i][j]=true;
            dfs(i,j,1,map[i][j]);
            checkExtra(i, j);
            visited[i][j]=false;
        }
    }

    cout<<ans<<"\n";


    return 0;
}