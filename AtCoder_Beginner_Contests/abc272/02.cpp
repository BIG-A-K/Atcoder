#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j,p;
    int N,M;
    cin>>N>>M;
    bool pair[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            pair[i][j]=false;
        }
    }
    // test(1);
    vector<vector<int>> x(M);
    for(i=0;i<M;i++){
        int k;
        cin>>k;
        x[i].resize(k);
        for(j=0;j<k;j++){
            cin>>x[i][j];
            x[i][j]--;
        }
        // test(k);
        for(j=0;j<k;j++){
            for(p=j+1;p<k;++p){
                pair[x[i][j]][x[i][p]]=true;
                pair[x[i][p]][x[i][j]]=true;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(!pair[i][j]){
                // cout<<i<<j<<endl;
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}
