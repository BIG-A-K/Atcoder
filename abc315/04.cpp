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
    vector<vector<char>> c(H,vector<char>(W));
    vector<vector<bool>> check(H,vector<bool>(W,false));
    vector<vector<bool>> precheck(H,vector<bool>(W,false));
    bool is_changed = true;
    rep(i,H){
        rep(j,W){
            cin>>c[i][j];
        }
    }
    set<char> color;
    while(is_changed){
        // cout<<is_changed<<endl;
        is_changed = false;
        int tmp = 0;
        rep(i,H){
            color.clear();
            tmp = 0;
            rep(j,W){
                if(!check[i][j]){
                    color.insert(c[i][j]);
                    // cout<<i<<","<<j<<endl;
                    tmp++;
                }
                // cout<<color.size()<<endl;

            }
            // cout<<color.size()<<endl;
            if(tmp > 1&&color.size() == 1){
                rep(j,W){
                    precheck[i][j] = true;
                    is_changed = true;
                }
            }
        }
        rep(j,W){
            color.clear();
            tmp = 0;
            rep(i,H){
                if(!check[i][j]){
                    color.insert(c[i][j]);
                    // cout<<i<<","<<j<<endl;
                    tmp ++;
                }
            }
            if(tmp > 1 && color.size() == 1){
                rep(i,H){
                    precheck[i][j] = true;
                    is_changed = true;
                }
            }
            rep(i,H){
                rep(j,W){
                    if(precheck[i][j]){check[i][j] = true;}
                    precheck[i][j] = false;
                }
            }
        }
        // cout<<is_changed<<endl;

    }
    int ans = 0;
    rep(i,H){
        rep(j,W){
            if(!check[i][j]){
                ans ++;
            }
        }
    }
    cout<<ans<<endl;
}
