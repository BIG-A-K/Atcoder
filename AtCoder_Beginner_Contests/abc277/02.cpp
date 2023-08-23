#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    set<string> m;
    unordered_set<char> first = {'H','D','C','S'};
    unordered_set<char> second = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    rep(i,n){
        string input;
        cin>>input;
        if(first.find(input[0])==first.end()||second.find(input[1])==second.end()){
            cout<<"No"<<endl;
            // test(1);
            return 0;   
        }
        m.insert(input);
        // cout<<m.size()<<endl;
    }
    if(m.size()!=n){
        cout<<"No"<<endl;
        // test(2);
        return 0;   
    }
    else{
        cout<<"Yes"<<endl;
    }
}
