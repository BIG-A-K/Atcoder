#include<iostream>
using namespace std;

int main(){
    int A[5];
    int i;
    bool c=true;
    cin>>A[0];
    for(i=1;i<5;i++){
        cin>>A[i];
        if(A[i]==A[i-1]){
            c=false;
        }
    }
    if(c){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}