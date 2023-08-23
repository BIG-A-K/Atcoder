#include<iostream>
using namespace std;

int main(){
    int a[2];
    int b[2];
    int c[2];
    int d[2];
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];
    cin>>d[0]>>d[1];
    double r1;
    if(a[0]-c[0]){
        r1 = (a[1]-c[1])/(a[0]-c[0]);
    }
    else{
    }
    double l1 = a[1]-r1*a[0];
    if((d[1]-r1*d[0]-l1)*(b[1]-r1*b[0]-l1)<0){
        cout<<"hoge"<<endl;
        double r2=(b[1]-d[1])/(b[0]-d[0]);
        double l2 = b[1]-r2*b[0];
        if((c[1]-r2*a[0]-l2)*(c[1]-r2*a[0]-l2)<0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        cout<<"hoge"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
