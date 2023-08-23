#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long int i,n;
    long long int j;
    j=1;
    cin >> n;   
    if(n*log(2)>2*log(n)){
        cout<<"Yes"<<endl;
        return 0;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }
}