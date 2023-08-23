#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;


map<pair<int,int>,int> mp;
string S;
int NAND(int f,char c){
    if (c == '1' && f == 1){
        return 0;
    }
    else{
        return 1;
    }
}
int f(int i,int j){
    if(i == j){
        return (int)(S[i] - '0');
    }
    else{
        int tmp = i;
        i = min(i,j);
        j = max(tmp,j);
        if(mp.find(make_pair(i,j)) == mp.end()){
            mp.emplace((i,j),NAND(mp[make_pair(i,j-1)],S[j]));
        }
        return (int) mp[make_pair(i,j)];
    }
}
int main(){
    int N;
    cin>>N>>S;
    ll ans = 0;
}
