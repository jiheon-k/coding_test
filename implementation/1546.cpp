#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int max=v[n-1];
    float res=0;
    for(int i=0; i<n; i++){
        float new_grade=((float)v[i]/max)*100;
        res+=new_grade;
    }
    cout<<res/n<<'\n';
    return 0;
}