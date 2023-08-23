#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    vector<int> dp(n+1,0);
    rep(i,n){
        dp[i+1] = max(dp[i] + a[i],dp[i]);
    }
    cout<<dp[n]<<endl;
}
