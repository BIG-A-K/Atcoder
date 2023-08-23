#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    vector<bool> dp(s.size()+1,false);
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            dp(i)=true;
        }
    }
    for(int i=0,j=0;i<s.size(),j<t.size();i++,j++){
        if(s[i]==t[i]){
            continue;
        }
        else{
            int ret=0;
            for(int x=i-1;x>=0;x--){
                if(dp(x)){
                    ret = i-x;
                }
            }
            if(ret<1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
}