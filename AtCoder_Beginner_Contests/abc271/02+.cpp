#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(Z) cout<<"test"<<Z<<endl
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    vector<vector<ll int>> a(N);
    int s,t;
    queue<ll int> ans;
    for(int i=0;i<N;i++){
        int l;
        cin>>l;
        a[i].resize(l);
        for(int j=0;j<l;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<Q;++i){
        cin>>s>>t;
        ans.push(a[s-1][t-1]);
    }
    while(!ans.empty()){
        cout<<ans.front()<<endl;
        ans.pop();
    }

}
