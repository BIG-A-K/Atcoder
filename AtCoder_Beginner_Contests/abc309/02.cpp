#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N;
    cin>>N;
    char A[N][N],B[N][N];
    rep(i,N){
        rep(j,N){
            cin>>A[i][j];
            B[i][j] = A[i][j];
        }
    }

    for(int i = 1;i < N; i++){
        B[0][i] = A[0][i - 1]; 
    }
    for(int i = 1; i< N;i++){
        B[i][N-1] = A[i-1][N-1];
    }
    for(int i = N-2; i >= 0;i--){
        B[N-1][i] = A[N-1][i+1];
    }
    for(int i = N-2; i >= 0;i--){
        B[i][0] = A[i+1][0];
    }
    
    rep(i,N){
        rep(j,N){
            cout<<B[i][j];
        }
        cout<<endl;
    }
}
