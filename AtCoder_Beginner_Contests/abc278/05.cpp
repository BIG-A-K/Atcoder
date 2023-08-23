#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int H,W,N;
    int h,w;
    cin>>H>>W>>N>>h>>w;
    int A[H][W];
    rep(i,H){
        rep(j,W){
            cin>>A[i][j];
        }
    }
    int max = 0;
    int max_pair[2]={0,0};
    rep(k,H-h){
        set<int> s;
        rep(l,W-w){
            for(i,W){
                if(i>=k&&i<=k+h)continue;
                for(j,H){
                    if(j>=l&&j<=l+w)continue;
                    s.insert(A[i][j]);
                }
            }
        }
        if(max<s.size()){
            max=s.size();
            max_pair[0]=k;
            max_pair[1]=l;
        }
        s.clear();
    }
    
}
