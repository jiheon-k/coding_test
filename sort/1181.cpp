#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 복사 안하고, 수정도 못하고 빠르게 사용
// & -> 참조, 복사 안하고 원본 그대로 사용(별명)
bool cmp(const string &a, const string &b){
    if(a.length()==b.length())
        return a<b;
    return a.length()<b.length();
    // true -> a가 앞, false -> b가 앞
}

int main(void){
    int n;
    cin>>n;
    vector<string> list;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        list.push_back(s);
    }

    // cmp 함수를 기준으로 첨부터 끝까지 정렬
    sort(list.begin(), list.end(), cmp);

    // 중복 제거
    // unique(v.begin(), v.end()) -> 중복을 앞으로 밀어넣고 뒤에 쓰레기값
    // erase(위치, 끝) -> 쓰레기값 삭제
    list.erase(unique(list.begin(), list.end()), list.end());

    // auto -> 타입을 자동으로 추론
    for(auto &s:list)
        cout<<s<<'\n';
    return 0;
}