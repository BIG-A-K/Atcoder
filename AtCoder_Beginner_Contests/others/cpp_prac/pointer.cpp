#include<iostream>
using namespace std;

int main(){
    int *p;
    int x;
    cin>>x;
    p=&x;
    cout<<*p<<endl;
    return 0;
}