#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int map[101][101];
int move_a[4]={0,0,1,-1};
int move_b[4]={1,-1,0,0};

bool visited[101][101];
int dist[101][101];


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    string s;
    for(int i=1; i<=n; i++){
        cin>>s;
        for(int j=0; j<s.size(); j++){
            map[i][j+1]=s[j]-'0';
        }
    }
    
    queue<pair<int, int>> q;
    q.push({1,1});
    visited[1][1]=true;
    dist[1][1] = 1;
    while(!q.empty()){
        auto [r,c]=q.front();  
        // -> pair<int, int> cur=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int x=r+move_a[i];
            int y=c+move_b[i];
            if(x>=1 && x<=n && y>=1 && y<=m && !visited[x][y] && map[x][y]==1){
                dist[x][y]=dist[r][c]+1;
                q.push({x,y});
                visited[x][y]=true;
            }
        }
    }

    cout<<dist[n][m]<<"\n";

    return 0;
}