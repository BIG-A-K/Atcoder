#include<iostream>
#define ll long long
using namespace std;

int main(){
    int N;
    cin>>N;
    int result =1;
    for(int i=1;i<=N;i++){
        result*=2;
    }
    cout<<result<<endl;
    return 0;
}