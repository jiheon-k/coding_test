#include<iostream>

using namespace std;

// 시간복잡도 고려해서 다시 풀기

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin>>N>>M;
    string str;
    for(int i=0; i<N; i++){
        str.push_back('I');
        str.push_back('O');
    }
    str.push_back('I');
    //cout<<str<<"\n";
    string S;
    cin>>S;
    int cnt=0;
    int pos=S.find(str);
    while (pos!=string::npos){
        cnt++;
        pos=S.find(str, pos+1);
    }
    cout<<cnt<<"\n";
    return 0;
}