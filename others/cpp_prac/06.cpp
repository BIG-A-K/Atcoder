#include<iostream>
using namespace std;

int main(){
    int A,B;
    char op;
    cin>>A;
    cin>>op;
    cin>>B;
    if(op=='+'){
        cout<<A+B<<endl;
    }
    else if(op=='-'){
        cout<<A-B<<endl;
    }
    else if(op=='*'){
        cout<<A*B<<endl;
    }
    else if(op=='/'){
        if(B==0){
            cout<<"error"<<endl;
            return 0;
        }
        cout<<A/B<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
    return 0;
}