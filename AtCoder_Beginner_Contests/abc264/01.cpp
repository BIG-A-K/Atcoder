#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    char s[] = "atcoder";
    int l,r;
    cin>>l>>r;
    --l;
    --r;
    for(int i = l;i<=r;i++){
        cout<<s[i];
    }
    cout<<endl;
}