#include<iostream>
// #include<cstdio>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> a(N,vector<int>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(j==0||i==j){
                a[i][j]=1;
                cout<<1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                cout<<a[i][j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}