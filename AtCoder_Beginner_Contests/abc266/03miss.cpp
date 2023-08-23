#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#define pi acos(-1)
#define ll long long
using namespace std;

double degree(int x1,int y1,int xc,int yc,int x2,int y2){
    x1-=xc;
    x2-=xc;
    y1-=yc;
    y2-=yc;
    cout<<"hoge"<<endl;
    double alpha,beta;
    if(x1==0){
        alpha = pi/2;
        if(y1<0){
            alpha *=-1;
        }
    }   
    else{
        alpha=atan(y1/x1);
    }
    if(x2 == 0){
        beta = pi;
        if(y2<0){
            beta *=-1;
        }
    }
    else{
        beta =atan(y2 / y1);
    }
    cout << abs(alpha - beta)/pi<<endl;
    return abs(alpha-beta);

}//c means center

int main(){
    int x[4],y[4];
    bool tf = true;
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }
    if(degree(x[0],y[0],x[1],y[1],x[2],y[2])>pi){
        tf = false;
    }
    if(degree(x[1],y[1],x[2],y[2],x[3],y[3])>pi){
        tf = false;
    }
    if(degree(x[2],y[2],x[3],y[3],x[0],y[0])>pi){
        tf = false;
    }
    if(degree(x[3],y[3],x[0],y[0],x[1],y[1])>pi){
        tf = false;
    }
    if(tf){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}