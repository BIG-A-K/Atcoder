#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    char s[h][w],t[h][w];
    rep(i,h){
        rep(j,w){
            cin>>s[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            cin>>t[i][j];
        }
    }
    unordered_map<string,int> row1;
    string S1,S2;
    rep(j,w){
        S1.clear();
        rep(i,h){
            S1.push_back(s[i][j]);
        }
        if(row1.find(S1)!=row1.end()){
            row1[S1]+=1;
        }
        else{
            row1[S1]=1;
        }
    }
    rep(j,w){
        S2.clear();
        rep(i,h){
            S2.push_back(t[i][j]);
        }
        if(row1.find(S2)!=row1.end()){
            row1[S2]--;
            if((row1[S2])<=0){
                row1.erase(S2);
            }
            continue;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }    
    cout<<"Yes"<<endl;
}
