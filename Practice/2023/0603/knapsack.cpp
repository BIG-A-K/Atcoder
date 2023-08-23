#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int N;
    int W;
    cin>>N;
    vector<int> weight(N),value(N);
    rep(i,N){
        cin>>weight[i]>>value[i];
    }
    cin>>W;
    vector<vector<int>> dp(N,vector(W,0));
    //dp[value][weight]
    rep(i,W){
        dp[0][i] = 0;
    }
    for(int i = 0; i < N; i++){
        for(int w = 0; w < W; w++){
            if(w >= weight[i]){
                dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
            }
            else{
                dp[i+1][w] = dp[i][w];
            }
        }
    }
    cout<<dp[N][W]<<endl;
}
