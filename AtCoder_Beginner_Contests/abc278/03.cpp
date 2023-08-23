#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    ll int n;
    int q;
    cin>>n>>q;
    map<ll int,set<ll int>> ff;
    rep(i,q){
        int t;
        ll int a,b;
        cin>>t>>a>>b;
        switch(t){
            case(1):{
                ff[a].insert(b);
                break;
            }
            case(2):{
                ff[a].erase(b);
                break;
            }
            case(3):{
                if(ff[a].find(b)!=ff[a].end() && ff[b].find(a)!=ff[b].end()){
                        cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                break;
            }
            default:{
                exit(1);
            }
        }
    }
} 
