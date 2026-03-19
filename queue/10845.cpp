#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(void){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s=="push"){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(s=="pop"){
            if(q.empty())
                cout<<"-1"<<'\n';
            else{
                int res=q.front();
                q.pop();
                cout<<res<<'\n';
            }
        }
        else if(s=="size")
            cout<<q.size()<<'\n';
        else if(s=="empty")
            cout<<(q.empty()?1:0)<<'\n';
        else if(s=="front"){
            if(q.empty())
                cout<<"-1"<<'\n';
            else{
                int res=q.front();
                cout<<res<<'\n';
            }
        }
        else if(s=="back"){
            if(q.empty())
                cout<<"-1"<<'\n';
            else
                cout<<q.back()<<'\n';
        }
    }
    return 0;
}