#include<iostream>
using namespace std;

int main(){
    int max=0,min=200;
    int cm[3];
    for(int i=0;i<3;i++){
        cin>>cm[i];
        if(max<cm[i]){
            max=cm[i];
        }
        if(min>cm[i]){
            min=cm[i];
        }
    }
    cout<<max-min<<endl;
    return 0;
}
