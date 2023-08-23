#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int X,Y,Z;
    string S;
    cin>>X>>Y>>Z>>S;
    int push = min(X,Y);
    vector<vector<ll>> dp(S.size()+1,vector<ll>(2,0));
    dp[0][0] = 0;
    dp[0][1] = Z;
    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'a'){
            dp[i+1][0] = min(dp[i][0] + X, dp[i][1] + Z + push);
            dp[i+1][1] = min(dp[i][1] + Y, dp[i][0] + Z + push);
        }
        else{
            dp[i+1][0] = min(dp[i][0] + Y, dp[i][1] + Z + push);
            dp[i+1][1] = min(dp[i][1] + X, dp[i][0] + Z + push);            
        }
    }
    cout<<min(dp[S.size()][0],dp[S.size()][1])<<endl;
}
