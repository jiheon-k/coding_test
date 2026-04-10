#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin>>m;
    set<int> list;
    while(m>0){
        string s;
        cin>>s;
        if(s=="add"){
            int x;
            cin>>x;
            list.insert(x);
        }
        else if(s=="remove"){
            int x;
            cin>>x;
            list.erase(x);
        }
        else if(s=="check"){
            int x;
            cin>>x;
            cout<<(list.count(x)?1:0)<<'\n';
        }
        else if(s=="toggle"){
            int x;
            cin>>x;
            if(list.count(x))
                list.erase(x);
            else    
                list.insert(x);
        }
        else if(s=="all"){
            list.clear();
            for(int i=1; i<=20; i++)
                list.insert(i);
        }
        else if(s=="empty")
            list.clear();
        m--;
    }

    return 0;
}