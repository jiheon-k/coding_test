#include<iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int max=0, min=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(i==0){
            max=x;
            min=x;
        }
        else{
            if(x>max)
                max=x;
            if(x<min)
                min=x;
        }
    }
    cout<<min<<" "<<max<<'\n';
}