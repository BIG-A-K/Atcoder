#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    ll int m;
    cin>>n>>m;
    unordered_map<ll int,int> mp;
    vector<ll int> a(n);
    rep(i,n){
        ll int input;
        cin>>a[i];
        input=a[i];
        if(mp.find(input)==mp.end()){
            mp[input]=1;
        }
        else{
            mp[input]++;
        }
    }
    ll int sum=0;
    ll int minus=0;
    bool repeat =false;
    rep(i,n){
        while(mp.find(a[i])!=mp.end()){
            sum+=i*mp[a[i]];
            i++;
            if(minus<sum){
                minus=sum;
            }
        }
        if(repeat){
            break;
        }
        if(i==n-1){
            i=0;
            repeat=true;
        }
    }
    sum=0;//*再利用
    rep(i,n){
        if(mp.find(a[i])==mp.end())continue;
        rep(j,mp[a[i]]){
            sum+=i;
        }
    }
    test(sum);
    test(minus);
    cout<<sum-minus<<endl;
}
