#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<string> S(N);
    vector<int> A(N);
    int min = INT_MAX;
    int minIdx = 0;
    rep(i,N){
        cin>>S[i]>>A[i];
        if(min > A[i]){
            minIdx = i;
            min = A[i];
        }
    }
    for(int i = minIdx; i<N; i++){
        cout<<S[i]<<endl;
    }
    for(int i = 0; i < minIdx; i++){
        cout<<S[i]<<endl;
    }
}
