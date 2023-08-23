#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int pizza[361];
    int input,count=0,max=0;
    int i;
    long int N,I;
    for(int a=0;a<360;a++){
        pizza[a]=0;
    }
    pizza[0]=1;
    pizza[360]=1;
    cin >> N;
    for(i=0,I=0;I<N;I++){
        cin>>input;
        if(i+input>=360){
            pizza[i+input-360]=1;
            i=i+input-360;
        }
        else{
            pizza[i+input]=1;
            i=i+input;
        }
    }
    for(i=0;i<=360;i++,count++){
        if(pizza[i]){
            if(max<count){
                max=count;
            }
            // cout<<count<<endl;
            count=0;
        }
    }
    cout<<max<<endl;
    return 0;
}