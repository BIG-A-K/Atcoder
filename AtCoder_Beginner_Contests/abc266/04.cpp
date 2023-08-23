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
    int i,j;    
    int N;
    cin>>N;
    vector<ll int> t(N+1),x(N+1);
    vector<ll int> a(N+1);
    for(i=0;i<N;i++){
        cin>>t.at(i)>>x.at(i)>>a.at(i);
    }
    ll int dp[5][100005];
    dp[0][0]=0;
    for(i=1;i<t.at(N);++i){
        for(j=0;j<4;j++){
            dp[j][i]=dp[j][i-1];
            if(i!=0||i!=4){
                dp[j][i]=max(dp[j-1][i-1],dp[j][i]);
            }
        }
        dp[x.at(i)][i]+=a.at(i);
    }    
    ll ans = 0;
    for(int i=0;i<5;i++){
        ans = max(ans,dp[i][100000]);
    }
    cout<<ans<<endl;
}

