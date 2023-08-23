#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    ll int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    a %= 998244353;
    b %= 998244353;
    c %= 998244353;
    d %= 998244353;
    e %= 998244353;
    f %= 998244353;
    ll int tmp =a*b%998244353;
    tmp*=c;
    tmp%=998244353;
    ll int ans =tmp;
    tmp=d*e;
    tmp%=998244353;
    tmp*=f;
    tmp%=998244353;
    ans-=tmp;
    ans %= 998244353;
    cout << ans << endl;
}
