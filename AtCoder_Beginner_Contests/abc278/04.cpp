#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<ll int> q(n);
    map<int,ll int>m;
    rep(i,n){
        cin>>q[i];
    }
    int Q;
    cin>>Q;
    bool all = false;
    ll int x_all = 0;
    rep(i,Q){
        int query;
        cin>>query;
        if(query==1){
            cin>>x_all;
            all = true;
            m.clear();
        }
        else if(query==2){
            int j;
            ll int x;
            cin>>j>>x;
            j--;
            if(m.find(j)!=m.end()){
                m[j]+=x;
            }
            else{
                m[j]=x;
            }
        }
        else if(query==3){
            int j;
            cin>>j;
            j--;
            if(all){
                if(m.find(j)!=m.end()){
                    cout<<x_all+m[j]<<endl;
                }
                else{
                    cout<<x_all<<endl;
                }
            }
            else{
                if(m.find(j)!=m.end()){
                    cout<<q[j]+m[j]<<endl;
                }
                else{
                    cout<<q[j]<<endl;
                }
            }
        }
        // for(auto t:q){
        //     cout<<t<<" ";
        // }
        // cout<<endl;
    }
}
