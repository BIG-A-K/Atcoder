#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<set<int>> F(N);
    vector<int> P(N);
    rep(i,N){
        int c;
        cin>>P[i]>>c;
        rep(j,c){
            int input;
            cin >> input;
            F[i].emplace(input);
        }
    }
    for(int i = 0;i < N - 1; i++){
        for(int j = 0;j < N; j++){
            if(i == j){continue;}
            bool tmp_yes = true;
            if(P[i] < P[j]){continue;}
            for(auto f : F[i]){
                if(F[j].find(f) == F[j].end()){
                    tmp_yes = false;
                    break;
                }
            }
            if(!tmp_yes){continue;}
            if(P[i] > P[j] || F[j].size() > F[i].size()){
                yes();
                return 0;
            }
        }
    }
    no();
}
