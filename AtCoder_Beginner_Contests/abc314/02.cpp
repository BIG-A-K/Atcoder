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
    vector<int> C(N);
    map<int,set<int>> ms;
    rep(i,N){
        cin>>C[i];
        rep(j,C[i]){
            int a;
            cin >> a;
            ms[a].emplace(i);
        }
    }
    int X;
    cin>>X;
    set<int> ans;
    int min = INT_MAX;
    for(auto i: ms[X]){
        if(C[i] < min){
            ans.clear();
            ans.emplace(i);
            min = C[i];
        }
        else if(C[i] == min){
            ans.emplace(i);
        }
    }
    cout<<ans.size()<<endl;
    for(auto i : ans){
        cout<<i+1<<" ";
    }
    cout<<endl;
}
