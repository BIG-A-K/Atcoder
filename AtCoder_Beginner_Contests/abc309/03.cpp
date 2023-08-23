#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    vector<int> a(N),b(N);
    vector<pair<int,int>> d(N);
    rep(i,N){
        cin>>a[i]>>b[i];
        d[i].first = a[i];
        d[i].second = b[i];
    }
    ll sum = 0;
    sort(d.begin(),d.end());
    for(int i = 0; i < N; i++){
       sum += d[i].second;
    //    cout<<d[i].first<<","<<d[i].second<<endl;
    }
    if(sum <= K){
        cout<<1<<endl;
        return 0;
    }
    rep(i,N){
        if (sum <= K){
            cout<<d[i-1].first+1<<endl;
            return 0;
        }
        sum -= d[i].second;
    }
    cout<<d[N-1].first+1<<endl;
}
