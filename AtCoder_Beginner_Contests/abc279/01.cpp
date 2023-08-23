#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=0;
    rep(i,s.size()){
        if(s[i]=='w'){
            ans+=2;
        }
        else if(s[i]=='v'){
            ans++;
        }
        else{
            return 1;
        }
    }
    cout<<ans<<endl;
}
