#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    string S;
    cin>>S;
    vector<int> C(N);
    vector<vector<char>> vq(M,vector<char>());
    rep(i,N){
        cin>>C[i];
    }
    rep(i,N){
        vq[C[i] - 1].emplace_back(S[i]);
    }
    rep(i,M){
        vq[i].insert(vq[i].begin(),vq[i][vq[i].size()-1]);
    }
    rep(i,N){
        cout<<vq[C[i] - 1].front();
        vq[C[i] - 1].erase(vq[C[i] - 1].begin());
    }
    cout<<endl;
}