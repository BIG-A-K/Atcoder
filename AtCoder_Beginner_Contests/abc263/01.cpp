#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    int a[5];
    int diff=0;
    bool TF = false;
    for(int i=0;i<5;++i){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;++j){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j]=tmp;
            }
        }
    }
    if(a[0]==a[1] && a[1]==a[2] &&a[3]==a[4]){//3:2
        // cout<<"3:2"<<endl;
        TF = true;
    }
    else if(a[0] == a[1] && a[2] == a[3] && a[3] ==a[4]){//2:3
        // cout<<"2:3"<<endl;
        TF = true;
    }
    if(TF){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}