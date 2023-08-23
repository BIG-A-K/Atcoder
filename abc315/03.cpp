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
    vector<set<int>> t(N);
    rep(i,N){
        int f,s;
        cin>>f>>s;
        t[f].emplace(s);
    }

    int m = 0;
    int id = 0;
    int tmp_ans = 0;
    rep(i,N){
        if(m < *t[i].end()){
            id = i;
            m = *t[i].end(); 
        }
    }
    vector<int>tmp(t[id].begin(),t[id].end());
    if(tmp.size()>1)tmp_ans = tmp[0] + tmp[1]/2;

    vector<int> max(N);
    rep(i,N){
        max[i] = *t[i].end();
    }
    sort(max.begin(),max.end());
    reverse(max.begin(),max.end());
    int ans = max[0] + max[1];
    if(ans < tmp_ans){
        ans = tmp_ans;
        cout<<"no"<<endl;
    }
    cout<<ans<<endl;
    
}
