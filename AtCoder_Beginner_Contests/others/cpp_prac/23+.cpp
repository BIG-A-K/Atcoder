#include<iostream>
#include<map>
using namespace std;

int main(){
    int N;
    int input;
    int MAX=0,temp;
    cin>>N;
    map<int,int> a;
    for(int i=0;i<N;i++){
        cin>>input;
        a[input]++;
        if(MAX<a[input]){
            MAX=a[input];
            temp=input;
        }
    }
    cout<<temp<<" "<<MAX<<endl;
    return 0;
}