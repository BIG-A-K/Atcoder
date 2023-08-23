#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> S(n);
    map<string,set<string>> ms;
    bool isFirst=true;
    rep(i,n){
        string s;
        cin>>s;
        S[i]=s;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[j][0]==s[i][s.size()-1]){
                ms[s[i]].insert(s[j]);
            }
        }
    }
    for
}
