#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test() cout<<"test"<<endl
using namespace std;

int main(){
    int i,j;    
    int N,Q;
    cin>>N>>Q;
    vector<vector<ll int>> a(N,vector<ll int>(2000000));
    // ll int a[N][200005];
    queue<ll int> ans;
    int l;
    int s,t;
    for(i=0;i<N;i++){
        cin>>l;
        for(j=0;j<l;j++){
            cin>>a.at(i).at(j);
        }
        // test();
    }
    for(i=0;i<Q;++i){
        cin>>s>>t;
        ans.push(a[s-1][t-1]);
    }
    while(!ans.empty()){
        cout<<ans.front()<<endl;
        ans.pop();
    }

}
