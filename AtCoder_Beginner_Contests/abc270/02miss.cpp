#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;
    int x,y,z;
    cin>>x>>y>>z;
    int ans=0;
    if(x*y<0){
        ans=abs(x);
    }
    else if(abs(x)<abs(y)){
        ans = abs(x);
    }
    else{
        if(abs(y)>abs(z)){
            if(y*z>0){
                ans = abs(x);
            }
            else{
                ans = abs(z)+abs(x);
            }
        }
        else{//abs(y)<abs(z)
            if(y*z>0){
                ans = -1;
            }
        }
    }
}
