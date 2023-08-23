#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int temp=0;
    while(N!=0){
        temp+=N%10;
        N/=10;
    }
    cout<<temp;
    return 0;
}