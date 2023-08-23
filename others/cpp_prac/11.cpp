#include<iostream>
using namespace std;

int main(){
    int N;
    int A;
    int B[8];
    char op[8];
    cin>>N>>A;
    for(int i=1;i<=N;i++){
         cin>>op[i]>>B[i];
    }
    for(int i=1;i<=N;i++){
        if(op[i]=='/'&&B[i]==0){
            cout<<"error"<<endl;
            return 0;
        }
        cout<<i<<":";
        if(op[i]=='+'){
            A+=B[i];
            cout<<A<<endl;
        }
        if(op[i]=='-'){
            A-=B[i];
            cout<<A<<endl;
        }
        if(op[i]=='*'){
            A*=B[i];
            cout<<A<<endl;
        }
        if(op[i]=='/'){
            A/=B[i];
            cout<<A<<endl;
        }
    }
    return 0;
}