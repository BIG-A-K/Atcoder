#include<iostream>
#define ll long long
using namespace std;

int main(){
    int N;
    cin>>N;
    int h=21;
    int m1,m2;
    if(N>=60){
        h++;
        N-=60;
    }
    if(N>=10){
        cout<<h<<":"<<N<<endl;
    }
    else{
        cout<<h<<":"<<0<<N<<endl;
    }

}