#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> plus_pq;
    priority_queue<int> min_pq;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==0){
            if(plus_pq.empty() && min_pq.empty())
                cout<<"0"<<'\n';
            else if(!plus_pq.empty() && !min_pq.empty()){
                int p=plus_pq.top();
                int m=min_pq.top();
                if(p+m>=0){
                    cout<<m<<"\n";
                    min_pq.pop();
                }
                else{
                    cout<<p<<"\n";
                    plus_pq.pop();
                }
            }
            else{
                if(plus_pq.empty()){
                    cout<<min_pq.top()<<"\n";
                    min_pq.pop();
                }
                else{
                    cout<<plus_pq.top()<<"\n";
                    plus_pq.pop();
                }
            }
            continue;
        }
        else{
            if(x>=0){
                plus_pq.push(x);
            }
            else{
                min_pq.push(x);
            }
        }
    }
    return 0;
}