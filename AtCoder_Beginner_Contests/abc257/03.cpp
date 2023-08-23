#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define ll long long
#define INT_MAX 2147483647
using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    multimap<int,bool> p;
    vector<int> memo();
    vector<ll int> w(n);
    for(int i=0;i<n;i++){
        cin>>w[i];
        p.emplace(w[i],s[i]);
    }
}