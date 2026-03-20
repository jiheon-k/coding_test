#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n>0){
        stack<char> q;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(q.empty())
                q.push(s[i]);
            else{
                char x=q.top();
                if(x=='(' && s[i]==')')
                    q.pop();
                else    
                    q.push(s[i]);
            }
        }
        if(q.empty())
            cout<<"YES"<<'\n';
        else    
            cout<<"NO"<<'\n';
        n--;
    }
    


    return 0;
}