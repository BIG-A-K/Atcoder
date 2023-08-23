#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> a(N);
    int A;
    rep(i,N){
        cin>>a[i];
    }    
    cin>>A;
    vector<vector<bool>> dp(N,vector<bool>(A,false))
    dp[0][0] = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < A; j++){
            if(j >= a[i]){
                dp[i+1][j] = dp[i][j - a[i]] | dp[i][j];
            }
            else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    if(dp[N][A]){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}
