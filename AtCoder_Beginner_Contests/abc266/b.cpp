#include<iostream>
#include<vector>
#define ll long long
#define m 998244353

using namespace std;

int main(){
    ll int n;
    cin >> n;
    int x;
    if(n>=0){
        x = n%m;
    }
    else if(abs(n)<m){
            x = n + m;
    }
    else{
        x = n%m;
        x+=m;
    }
    cout << x <<endl;
}