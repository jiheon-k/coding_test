#include<iostream>
using namespace std;

int main(void){
    int arr[8]={0};
    for(int i=0; i<8; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int k=0, j=0, check=0;
    int offset=(arr[0]<arr[1])?1:-1;
    if(offset==1){
        for(int i=0; i<7; i++)
            if(arr[i]>arr[i+1]){
                cout<<"mixed"<<'\n';
                return 0;
            }
        cout<<"ascending"<<'\n';
        return 0;
    }
    else{
        for(int i=0; i<7; i++)
            if(arr[i]<arr[i+1]){
                cout<<"mixed"<<'\n';
                return 0;
            }
        cout<<"descending"<<'\n';
        return 0;
    }
    return 0;
}

/*
int main() {
    int arr[8];
    for (int i = 0; i < 8; i++) cin >> arr[i];

    bool asc = true;
    bool desc = true;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > arr[i + 1]) asc = false;
        if (arr[i] < arr[i + 1]) desc = false;
    }

    if (asc) cout << "ascending\n";
    else if (desc) cout << "descending\n";
    else cout << "mixed\n";
}
*/