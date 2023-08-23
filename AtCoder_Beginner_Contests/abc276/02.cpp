#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;    
    int n,m;
    cin>>n>>m;
    vector<set<int>> vs(n);
    int a,b;
    for(i=0;i<m;i++){
        // cin>>a[i]>>b[i];
        cin>>a>>b;
        vs[a-1].insert(b);
        vs[b-1].insert(a);
    }
    for(i=0;i<n;i++){
        cout<<vs[i].size()<<" ";
        for(auto x:vs[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
