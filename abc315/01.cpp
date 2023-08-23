#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    string S;
    cin>>S;
    set<char> st = {'a','e','i','o','u'};
    for(int i = 0; i < S.size();i++){
        if(st.find(S[i]) == st.end()){
            cout<<S[i];
        }
        else{
            continue;
        }
    }
    cout<<endl;
}
