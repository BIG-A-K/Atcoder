#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    vector<class T> v;
    unordered_set<class T> us;
    set<class T> s;
    unordered_map<class T,class U> um;
    map<class T,class U> m;
    if(um.find("hoge") == um.end()){
        cout<<"OK"<<endl;
        um.emplace(NULL,NULL);
    }
}