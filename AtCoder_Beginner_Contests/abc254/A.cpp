#include<iostream>
// #include<cstdio>
using namespace std;

int main(){
    int N;
    int a[2];
    cin>>N;
    a[0]=N%10;
    N=N/10;
    a[1]=N%10;
    cout<<a[1]<<a[0]<<endl;
    return 0;
}
