#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N;
    cin>>N;
    set<string> st;
    rep(i,N){
        string input,rev;
        cin>>input;
        rev = input;
        reverse(rev.begin(),rev.end());
        if(st.find(input) == st.end() && st.find(rev) == st.end()){
            st.emplace(input);
        }
    }
    cout<<st.size()<<endl;
}
