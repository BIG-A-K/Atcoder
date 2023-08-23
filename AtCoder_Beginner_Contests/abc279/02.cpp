#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if(s.size()<t.size()){
        cout<<"No"<<endl;
        return 0;
    }

    int i,j;
    set<int> st;
    for(i=0;i<s.size();i++){
        if(s[i]==t[0]){
            st.insert(i);
        }
    }
    for(auto i:st){
        for(j=0;j<t.size();j++,i++){
            if(i>=s.size()){
                cout<<"No"<<endl;
                return 0;
            }
            if(s[i]==t[j]){
                continue;
            }
            else{
                break;
            }
        }
        if(j==t.size()){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
