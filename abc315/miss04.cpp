#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    vector<vector<int>> c(H,vector<int>(W));
    vector<vector<bool>> check(H,vector<bool>(W,false));
    // int sum = H * W;
    rep(i,H){
        rep(j,W){
            cin>>c[i][j];
        }
    }
    //行
    rep(i,H){
        map<int,set<int>> cm;
        rep(j,W){
            cm[c[i][j]].emplace(j);
        }
        for(auto color :cm){
            if(color.second.size() >= 1){
                for(auto j: color.second){
                    check[i][j] = true;
                }
            }
        }
    }
    rep(j,W){
        map<int,set<int>> cm;
        rep(i,H){
            if(!check[i][j]){
                cm[c[i][j]].emplace(i);
            }
        }
        for(auto color :cm){
            if(color.second.size() > 10){
                for(auto i: color.second){
                    check[i][j] = true;
                }
            }
        }
    }
    int ans = 0;
    rep(i,H){
        rep(j,W){
            if(!check[i][j]){
                ans ++;
            }
        }
    }
    cout<< ans <<endl;
}
