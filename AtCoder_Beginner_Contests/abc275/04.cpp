#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

unordered_map<ll int,ll int> um;

ll int func(ll int x){
    if(um.find(x) != um.end()){
        return um[x];
    }
    if(x==0){
        return 1;
    }
    else{
        ll int k1,k2;
        k1=x/2;
        k2=x/3;
        um.emplace(x,func(k1)+func(k2));
        return um[x];
    }

}

int main(){
    int i,j;    
    ll int n;
    cin>>n;
    // for(int i=0;i<50;++i){
    //     cout<<i<<" : "<<func(i)<<endl;
    // }
    cout<<func(n)<<endl;

}
