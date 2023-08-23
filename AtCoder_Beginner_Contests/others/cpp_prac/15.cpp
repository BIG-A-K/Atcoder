#include<iostream>
using namespace std;

int main(){
    int N;
    int i,j;
    int input,sum[3];
    int money=1;
    cin>>N;
    for(i=0;i<3;i++){
        sum[i]=0;
        for(j=0;j<N;j++){
            cin>>input;
            sum[i]+=input;
        }
        money*=sum[i];
    }
    cout<<money<<endl;
    return 0;
}