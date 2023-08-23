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
    vector<int> A(N),B(N);
    map<long double,set<int>> d;

    rep(i,N){
        cin>>A[i]>>B[i];
        d[(long double)A[i]/(A[i]+B[i])].emplace(i+1);
    }
    for(auto it = d.rbegin() ; it != d.rend();it++){
        // cout<<it->first<<endl;
        for(auto i : it->second){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
