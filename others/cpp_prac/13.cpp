#include<iostream>
using namespace std;

int absolute(int s){
    if(s<0){
        return -s;
    }
    else{
        return s;
    }
}

int main(){
    int N;
    int a[1000];
    int average=0;
    int i;
    cin >> N;
    for(i=0;i<N;i++){
        cin>>a[i];
        average+=a[i];
    }
    average/=N;
    for(i=0;i<N;i++){
        cout<<absolute(a[i]-average)<<endl;
    }
    return 0;
}