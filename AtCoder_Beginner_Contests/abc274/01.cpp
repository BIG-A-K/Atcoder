#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;    
    int A,B;
    cin>>A>>B;
    double t=(double)B/A;
    // cout<<(double)round(t*1000)/1000<<setw(4)<<setfill('0')<<endl;
    t = (double)round(t*1000)/1000;
    string ans = to_string(t);
    for(i=0;i<5;++i){
        cout<<ans[i];
    }
    cout<<endl;
}
