#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    set<int> s = {1,2,3,4,5};
    cout<<s.size()<<endl;
    cout<<*s.end()<<endl;
    cout<<*(s.end()-1)<<endl;
}
