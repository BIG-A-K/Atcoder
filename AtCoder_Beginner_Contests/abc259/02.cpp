#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
const double pi = acos(-1);


int main(){
    int a,b,d;
    cin>>a>>b>>d;
    long double theta=0;
    if(a!=0){
        theta = atan((long double)(b/a));
    }
    else{
        theta = pi/2;
    }
    long double r = sqrt((a*a)+(b*b));
    theta+=d*pi/180;
    while(theta>2*pi){
        theta-=2*pi;
    }
    long double a2=r*cos(theta);
    long double b2=r*sin(theta);
    // if(a2==-0.0){
    //     a2=abs(a2);
    // }
    // if(b2==-0.0){
    //     b2=abs(b2);
    // }
    printf("%Lf %Lf\n",a2,b2);
}