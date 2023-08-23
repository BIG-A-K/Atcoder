#include<iostream>
using namespace std;

int main(){
    int pattern;
    string text;
    int price;
    int N;
    cin>>pattern;
    if(pattern==2){
        cin >> text;
    }
    cin>>price;
    cin>>N;
    if(pattern==2){
        cout<<text<<"!"<<endl;}
    cout<<N*price<<endl;
    return 0;
}