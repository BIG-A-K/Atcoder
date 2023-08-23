#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    if(m>=x){
        cout<<t<<endl;
    }
    else{
        int ret = t - d*(x-m);
        cout<<ret<<endl;
    }
    return 0;
}