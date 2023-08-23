#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    string s;
    cin>>s;
    int k=-1;
    for(i=0;i<s.size();++i){
        if(s[i]=='a'){
            k=i+1;
        }
    }
    cout<<k<<endl;
}
