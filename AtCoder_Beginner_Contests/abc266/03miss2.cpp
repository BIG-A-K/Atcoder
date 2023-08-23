#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a[4][2];//a:0,b:1,c:2,d:3
    for(int i=0;i<4;i++){
        cin>>a[i][0]>>a[i][1];
    }
    int mid_x =(a[0][0]+a[2][0]);
    int mid_y =(a[0][1]+a[2][1]);
    double r = sqrt((mid_x-a[0][0])*(mid_x-a[0][0])+(mid_y-a[0][1])*(mid_y-a[0][1]));
    if(r>sqrt((mid_x-a[1][0])*(mid_x-a[1][0])+(mid_y-a[1][1])*(mid_y-a[1][1]))){
        if(r>sqrt((mid_x-a[3][0])*(mid_x-a[3][0])+(mid_y-a[3][1])*(mid_y-a[3][1]))){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}