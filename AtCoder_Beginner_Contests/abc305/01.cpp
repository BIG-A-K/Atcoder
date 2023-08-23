#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

int main(){
    int N;
    cin>>N;
    int o = N % 10;
    if(o < 3){
        cout<<N - o<<endl;;
    }
    else if(o < 8){
        cout<<N - o + 5<<endl;
    }
    else{
        cout<< N - o + 10<<endl;
    }
    return 0;
}
