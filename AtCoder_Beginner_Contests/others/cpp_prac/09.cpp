#include<iostream>
using namespace std;

int main(){
    int x,a,b;
    cin>>x>>a>>b;
    cout<<++x<<endl;
    cout<<x*(a+b)<<endl;
    cout<<x*(a+b)*x*(a+b)<<endl;
    cout<<x*(a+b)*x*(a+b)-1<<endl;
    return 0;
}