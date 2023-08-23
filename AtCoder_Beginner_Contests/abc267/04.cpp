#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int N,M;
    vector<ll int> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }    
    ll int dp[M][N];
    for(int i=0;i<N;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<M:i++){
        for(int j=0;j<N;j++){
            dp[i][j]=
            dp[i][j]=max(dp[i][j-1],dp[i],[j]);
        }
    }
}
