#include<iostream>
#include<cstdio>
using  namespace std;
unsigned long int GCD(int a,int b){
    return (b==0)? a:GCD(b,a%b);
}

unsigned long int LCM(int a,int b){
    unsigned long int h=GCD(a,b);
    return h?((a*b)/h):0;
}

int main(){
    int a,b;
    cout<<"this is test."<<endl;
    printf("input a:");scanf("%d",&a);
    printf("input b:");scanf("%d",&b);
    printf("GCD:%d\nLCM:%d\n",GCD(a,b),LCM(a,b));
    return 0;
}