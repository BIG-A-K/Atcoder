#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<bitset>
#include<cmath>
#include<climits> //INT_MAXやLLONG_MAXが使える。
#define pi acos(-1)
#define ll long long
using namespace std;
ll int to_decimal(const string s){
    ll int out = 0;
    int size = s.length();
    // cout<<size<<endl
    for(int i=0;i<size;i++){
        if(s[i]=='1'){
            ll int cnt =1;
            for(int j=i;j<size-1;j++){
                cnt *=2;
            }
            out +=cnt;
        }
        // cout<<cnt<<endl;
    }
    return out;
}

int main(){
    int i,j;
    string s = bitset<70>(LLONG_MAX).to_string();
    cout<<bitset<70>(LLONG_MAX)<<endl; 
    cout<<s<<endl;
    int msb=0;
    for(i=0;i<70;i++){
        if(s[i]!='0'){
            msb = i;
        break;
        }
    }
    s=s.substr(msb);
    cout<<s<<endl;
    // s = "1000000000000000000000000000000000000000000000000000000";
    ll int t = to_decimal(s);
    cout<<t<<endl;
    if(t==LLONG_MAX){
        cout<<"YES"<<endl;
    }
}
