#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N,P,Q;
    cin>>N>>P>>Q;
    vector<int> D(N);
    rep(i,N){
        cin>>D[i];
    }
    sort(D.begin(),D.end());
    int ans = min(D[0]+Q,P);
    cout<<ans<<endl;
}
