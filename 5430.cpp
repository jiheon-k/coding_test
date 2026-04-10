#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
// 다시 풀기
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        string p;
        cin>>p;
        int n;
        cin>>n;
        vector<int> list;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            list.push_back(x);
        }
        for(int i=0; i<p.size(); i++){
            if(p[i]=='R'){
                reverse(list.begin(), list.end());
            }
            else if(p[i]=='D'){
                if(list.empty()){
                    cout<<"error"<<'\n';
                    continue;;
                }
                else
                    list.erase(list.begin()); 
            }
        }
        cout<<"[";
        for(int i=0; i<list.size()-1; i++)
            cout<<list[i]<<",";
        cout<<list[list.size()-1]<<"]"<<'\n';
    }

    return 0;
}