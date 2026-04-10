#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt=0;
void dfs(int x){
    visited[x]=true;
    cnt++;
    for(int i:graph[x]){
        if(!visited[i]){
            dfs(i);
        }
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1);
    cout<<cnt-1<<'\n';
    return 0;
}