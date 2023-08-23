#include<iostream>
#define ll long long
using namespace std;

int main(){
    int a[2][2];
    int r,c;
    cin >>r>>c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<a[r-1][c-1]<<endl;
    return 0;
}