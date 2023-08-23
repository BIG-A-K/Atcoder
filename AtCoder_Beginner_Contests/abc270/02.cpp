#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;
    int x,y,z;
    cin>>x>>y>>z;
    int ans=0;
    if(x*y<0||abs(x)<abs(y)){
        ans = abs(x);
    }
    else {
        if(y*z<0){
            ans = 2*abs(z)+abs(x);
        }
        else if(abs(z)<abs(y)){ans = abs(x);}
        else{ans = -1;}
    }
    cout<<ans<<endl;
}
