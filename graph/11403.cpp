#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int map[101][101];
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>map[i][j];
    }

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(map[i][k] && map[k][j])
                    map[i][j]=1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<map[i][j]<<" ";
        }
        cout<<"\n";
    }
}