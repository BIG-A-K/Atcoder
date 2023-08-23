#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    unorderd_map<int,unorderd_set<int>> ms;//箱番号、中身
    rep(i,N){
        mp[i+1].insert(i+1);
    }
    int k = N+1;
    rep(i,Q){//Q回のクエリを行う。
        int query;
        cin>>query;
        switch(query){
            case(1):{
                int x,y;
                cin>>x>>y;
                mp[x].merge(mp[y]);
                mp[y].clear();
                break;
            }
            case(2):{
                int x;
                cin>>x;
                mp[x].insert(k);
                k++;
                break;
            }
            case(3):{
                int x;
                cin>>x;
                for(unorderd_set s:ms){
                    if(s.find(x)!=s.end()){
                        cout<<ms.find(s)<<endl;
                    }
                }
            }
        }
    }
}
