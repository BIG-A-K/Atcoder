#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll int x,a,n;
    ll int d;
    cin>>x>>a>>d>>n;
    if(d==0||((x-a)*d<0)){
        cout<<abs(x-a)<<endl;
        return 0;
    }
    ll int temp = (x-a)/d;
    ll int tmp_dif = abs(x-(a+temp*d));
    temp++;
    if(tmp_dif>abs(x-(a+temp*d))){
        tmp_dif=abs(x-(a+temp*d));
    }
    cout<<tmp_dif<<endl;
    return 0;
}