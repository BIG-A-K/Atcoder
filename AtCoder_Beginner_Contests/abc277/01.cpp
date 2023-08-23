#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int N,X;
    cin>>N>>X;
    vector<int> p(N);
    rep(i,N){
        cin>>p[i];
    }
    rep(i,N){
        if(p[i]==X){
            cout<<i+1<<endl;
            return 0;
        }
    }   
}
