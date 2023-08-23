#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll int x,a,n;
    ll int d;
    cin>>x>>a>>d>>n;
    if(x==(a+(n-1)*d)){
        cout<<0<<endl;
        return 0;
    }
    else{
        ll int temp=0;
        for(int i=0;i<n;i++){
            ll int ai = a+i*d;
            if(temp==0){
                temp=abs(ai-x);
            }
            else if(temp>abs(ai-x)){
                temp=abs(ai-x);
            }
        }
        cout<<temp<<endl;
        return 0;
    }    
}