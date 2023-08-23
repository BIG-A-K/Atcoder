#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    vector<ll> s(N/2+1,0);
    s[0] = 0;
    rep(i,N){
        cin>>A[i];
        if(i%2==0){
            if(i != 0){
                s[i/2] = s[i/2-1] + A[i] - A[i - 1];
            }
        }    
    }
    for(auto i :s){
        cout<<i<<endl;
    }
    
    int Q;
    cin>>Q;
    rep(i,Q){
        int l,r;
        cin>>l>>r;
    }
}