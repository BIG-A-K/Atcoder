#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

int givenum(char p){
    int ans = 0;
    if(p =='A'){
        return 0;
    }
    else if(p == 'B'){
        ans = 3;
    }
    else if(p == 'C'){
        ans = 4;
    }
    else if(p == 'D'){
        ans = 8;
    }
    else if(p == 'E'){
        ans = 9;
    }
    else if(p == 'F'){
        ans = 14;
    }
    else if(p == 'G'){
        ans = 23;
    }
    return ans;
}

int main(){
    char p,q;
    cin>>p>>q;
    cout<<abs(givenum(p) - givenum(q))<<endl;
    return 0;
}
