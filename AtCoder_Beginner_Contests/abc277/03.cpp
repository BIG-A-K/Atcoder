#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;



int main(){
    ll int n;
    ll int max = 0;
    cin>>n;
    unordered_map<ll int,unordered_set<ll int>> g;
    rep(i,n){
        ll int a,b;
        cin>>a>>b;
        g[a].insert(b);
        g[b].insert(a);
    }
    unordered_set<ll int> seen;
    stack<ll int> s;
    seen.insert(1);
    s.push(1);
    while(!s.empty()){
      ll int v = s.top();
      s.pop();
      if(max<v){
        max = v;
      }
      for(auto i:g[v]){
        if(seen.find(i)==seen.end()){
            seen.insert(i);
            s.push(i);
        }
      }      
    }
    cout<<max<<endl;
}
