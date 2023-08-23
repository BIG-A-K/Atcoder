#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    int N;
    ll int R,L,sum = 0;
    cin>>N>>L>>R;
    vector<ll int> A(N);
    for(int i = 0;i<N;i++){
        cin>>A.at(i);
        sum += A.at(i);
    }
    
}