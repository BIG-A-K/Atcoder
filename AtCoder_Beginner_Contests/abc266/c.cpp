#include<iostream>
#include<cmath>
#define pi acos(-1)
using namespace std;

double degree(int r1,int r2,int c1,int c2,int l1,int l2){
    r1-=c1;
    l1-=c1;
    r2-=c2;
    l2-=c2;
    double alpha,beta;
    alpha = atan(r2/r1);
    beta = atan(l2/l1);
    return (alpha-beta);
}

int main(){
    int a1,a2;
    int b1,b2;
    int c1,c2;
    int d1,d2;
    cin >>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
    double deg[4];
    deg[0] = degree(a1,a2,b1,b2,c1,c2);
    deg[1] = degree(b1,b2,c1,c2,d1,d2);
    deg[2] = degree(c1,c2,d1,d2,a1,a2);
    deg[3] = degree(d1,d2,a1,a2,b1,b2);
    for(int i=0;i<4;i++){
        if(deg[i]>pi){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}