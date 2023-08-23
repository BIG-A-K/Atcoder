#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

vector<set<int>> edge;

ll bfs(int start){
    queue<int> Q;
    map<int,ll> mp;
    set<int> visited;
    Q.push(start);
    int len = 0;
    mp.emplace(start,len);
    while(!Q.empty()){
        int v = Q.front();Q.pop();
        len = mp[v];
        for(auto i : edge[v]){
            if(visited.find(i) == visited.end()){
                visited.emplace(i);
                Q.push(i);
                mp.emplace(i,len+1);
            }
        }
    }
    ll max = 0;
    for(auto l : mp){
        if(max < l.second){
            max = l.second;
        }
    }
    return max;
}

int main(){
    int N1,N2,M;
    cin>>N1>>N2>>M;
    edge.resize(N1+N2);
    // vector<int> a(M),b(M);
    rep(i,M){
        int a,b;
        cin>>a>>b;
        edge[a - 1].emplace(b - 1);
        edge[b - 1].emplace(a - 1);
    }
    cout << bfs(0) + bfs(N1 + N2 - 1) + 1 << endl;
    return 0;
}