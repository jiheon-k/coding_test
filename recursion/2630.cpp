#include<iostream>

using namespace std;
int map[200][200];
int white=0, blue=0;
void func(int n, int m, int idx, int check){
    int color=map[n][m];
    bool same=true;
    for(int i=n; i<n+idx; i++){
        for(int j=m; j<m+idx; j++){
            if(map[i][j]!=color){
                same=false;
                break;
            }
        }
        if(!same)
            break;
    }
    if(check==0)
        white++;
    else if(check==idx*idx)
        blue++;
    else {
        func(n,m,idx/2,0);
        func(n+(idx/2), m+(idx/2), idx/2, 0);
        func(n+(idx/2), m, idx/2, 0);
        func(n, m+(idx/2), idx/2, 0);
    }   
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>map[i][j];

    func(1,1,n,0);
    cout<<white<<'\n'<<blue<<'\n';
    


    return 0;
}