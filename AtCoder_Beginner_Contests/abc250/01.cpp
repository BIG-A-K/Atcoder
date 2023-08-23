#include<iostream>
using namespace std;

int main(){
    int R,H,C,W;
    cin>>H>>W>>R>>C;
    int count=0;
    if(R-1>0){
        count++;
    }
    if(R+1<=H){
        count++;
    }
    if(C-1>0){
        count++;
    }
    if(C+1<=W){
        count++;
    }
    cout<<count<<endl;
}