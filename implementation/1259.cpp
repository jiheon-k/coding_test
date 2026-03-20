#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// string에는 reverse기능이 있다!!!

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        int x;
        cin>>x;
        if(x==0)
            break;
        vector<int> list;
        int num=x;
        while(num!=0){
            int k=num%10;
            num=num/10;
            list.push_back(k);
        }
        int len=list.size();
        int middle=len/2;
        int left=0, right=len-1;
        //cout<<"len: "<<len<<" middle: "<<middle<<" left: "<<left<<" right"<<right<<'\n';
        int check=0;
        while(left<right){
            if(list[left]==list[right])
                left++, right--;
            else{
                check=1;
                cout<<"no"<<'\n';
                break;
            }
        }
        if(check==0)
            cout<<"yes"<<'\n';
    }
    
    return 0;
}