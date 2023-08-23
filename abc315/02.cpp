#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int M;
    cin>>M;
    vector<int> D(M);
    int sum = 0;
    rep(i,M){
        cin>>D[i];
        sum += D[i];
    }
    int mid = (sum + 1)/2;
    rep(i,M){
        if(mid - D[i] <= 0){
            cout<<i+1<<" "<<mid<<endl;
            return 0;
        }
        else{
            mid -= D[i];
        }
    }
}
