#include<iostream>
using namespace std;

int absolute(int x){
    if(x>=0){
        return x;
    }
    else{
        return -x;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    if(absolute(a-b)==1||absolute(a-b)==9){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}