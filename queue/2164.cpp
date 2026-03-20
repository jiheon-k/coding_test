#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    queue<int> q;
    for(int i=1; i<=n; i++) q.push(i);
    while(q.size()>1){
        q.pop();
        int x=q.front();
        q.pop();
        q.push(x);
        if(q.size()==1)
            break;
    }
    cout<<q.front()<<'\n';
    return 0;
}