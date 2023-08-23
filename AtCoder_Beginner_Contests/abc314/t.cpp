#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    string S = "atcoder";
    rep(i, S.size()){
        if (S[i] >= 'A'){
            printf("%c", S[i] - 'a' + 'A');
        }
        else{
            printf("%c", S[i]);
        }    
    }
}
