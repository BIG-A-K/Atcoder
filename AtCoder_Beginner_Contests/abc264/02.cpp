#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    int r,l;
    cin>>r>>l;
    bool bw = false;//black
    if(r==2||r==14){
        if(2<=l && l<=14){
            bw = true;
        }
    }
    if(l==2||l==14){
        if(2<=r && r<=14){
            bw = true;
        }
    }

    if(r==4||r==12){
        if(4<=l && l<=12){
            bw = true;
        }
    }
    if(l==4||l==12){
        if(4<=r && r<=12){
            bw = true;
        }
    }

    if(r==6||r==10){
        if(6<=l && l<=10){
            bw = true;
        }
    }
    if(l==6||l==10){
        if(6<=r && r<=10){
            bw = true;
        }
    }
    if(r==8&&l==8){
        bw = true;
    }
    if(bw){
        cout<<"white"<<endl;
    }
    else{
        cout<<"black"<<endl;
    }
}