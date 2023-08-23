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
    int M,N;
    int i;
    cin>>N>>M;
    vector<ll int> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }   
    ll int dp[N+M];
    dp[0]=0;
    for(i=0;i<M;i++){//2*10^5
        dp[0]+=i*A[i];
    }
    for(i=1;(i+M)<=N;++i){
        ll int tmp=0;
        for(int j=0;j<M;j++){
            tmp+=(j+1)*A[i+j];
        }
        // cout<<tmp<<endl;
        dp[i]=max(dp[i-1],tmp);
    }
    cout<<dp[i-1]<<endl;

}
