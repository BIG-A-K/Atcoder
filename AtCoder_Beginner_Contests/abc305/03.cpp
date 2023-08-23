#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

int main(){
    int W,H;
    cin>>H>>W;
    vector<string> S(H);
    rep(i,H){
        string input;
        cin>>input;
        S[i] = input;
    }
    // int i = 0; int j = 1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S[i][j] == '#'){continue;}
            int tmp = 0;
            if(i - 1 >= 0  && S[i - 1][j] == '#'){
                tmp++;
            }
            if(i + 1 < H && S[i + 1][j] == '#'){
                tmp++;
            }
            if(j - 1 >= 0 && S[i][j - 1] == '#'){
                tmp++;
            }
            if(j + 1 < W && S[i][j + 1] == '#'){
                tmp++;
            }
            if(tmp >= 2){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    cout<<"NONE"<<endl;
}
