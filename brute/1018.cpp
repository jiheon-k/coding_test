#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int N, M;
    cin>>N>>M;
    vector<vector<char>> arr(N, vector<char>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char c;
            cin>>c;
            arr[i][j]=c;
        }
    }

    vector<vector<char>> chess_a(8, vector<char>(8));
    vector<vector<char>> chess_b(8, vector<char>(8));
    chess_a[0][0]='W';
    chess_b[0][0]='B';
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i==0 && j==0)
                continue;
            if(i%2==0){
                if(j%2==0){
                    chess_a[i][j]='W'; 
                    chess_b[i][j]='B';
                }
                else{
                    chess_a[i][j]='B'; 
                    chess_b[i][j]='W';
                }
            }
            else{
                if(j%2==0){
                    chess_a[i][j]='B'; 
                    chess_b[i][j]='W';
                }
                else{
                    chess_a[i][j]='W'; 
                    chess_b[i][j]='B';
                }
            }
        }
    }

    int min_v=N*M;
    int x=N-8, y=M-8;
    for(int i=0; i<=x; i++){
        for(int j=0; j<=y; j++){
            int change_a=0, change_b=0;
            for(int a=i; a<i+8; a++){
                for(int b=j; b<j+8; b++){
                    if(arr[a][b]!=chess_a[a-i][b-j])
                        change_a++;
                    if(arr[a][b]!=chess_b[a-i][b-j])
                        change_b++;
                }
            }
            min_v=min(min_v, min(change_a, change_b));
        }
    }
    cout<<min_v<<'\n';
    return 0;
}


/*
#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;

    vector<string> arr(N);
    for(int i=0; i<N; i++)
        cin >> arr[i];

    int minVal = N*M;
    for(int i=0; i<=N-8; i++){
        for(int j=0; j<=M-8; j++){
            int change_a = 0;
            for(int a=0; a<8; a++)
                for(int b=0; b<8; b++){
                    // (a+b)%2==0 이면 'W'여야 함 (chess_a 기준)
                    char expected = (a+b)%2==0 ? 'W' : 'B';
                    if(arr[i+a][j+b] != expected)
                        change_a++;
                }
            int change_b = 64 - change_a;
            minVal = min(minVal, min(change_a, change_b));
        }
    }

    cout << minVal << '\n';
    return 0;
}
*/