#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    ll A,B;   
    cin>>A>>B;
    if(A>=2*B){
        cout<<setprecision(11)<<(double)A/sqrt(1)+B*0<<endl;
    }
    else{
        double tmp=(double)A/sqrt(1)+B*0;
        double ans;
        int k = 1;
        do{
            ans = tmp;
            tmp=(double)A/sqrt(1+k)+B*k;
            k++;
            test(tmp);
        }while(tmp>ans);
        cout<<ans<<endl;
    }
}
