#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    queue<int> q;
    rep(i,n){
        int inp;
        cin>>inp;
        q.push(inp);
    }
    rep(i,k){
        q.pop();
        q.push(0);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
