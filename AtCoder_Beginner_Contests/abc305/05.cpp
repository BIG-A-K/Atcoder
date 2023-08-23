#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

int main(){
    int N,K;
    ll M;
    cin>>N>>M>>K;
    vector<int> a(M),b(M);
    vector<int> p(N),h(N);
    rep(i,M){
        int inputa,inputb;
        cin>>inputa>>inputb;
        a[i]=inputa - 1;
        b[i]=inputb - 1;
    }
    rep(i,N){
        int inputa,inputb;
        cin>>inputa>>inputb;
        p[i] = inputa - 1;
        h[i] = inputb;
    }
}
