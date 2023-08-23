#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<ll int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    ll int g=0;
    rep(i,n){
        g=gcd(g,a[i]);
    }
    int ans = 0;
    rep(i,n){
        a[i]/=g;
        while(a[i]%2==0){
            a[i]/=2;
            ans++;
        }
        while(a[i]%3==0){
            a[i]/=3;
            ans++;
        }
        if(a[i]!=1){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;
}
