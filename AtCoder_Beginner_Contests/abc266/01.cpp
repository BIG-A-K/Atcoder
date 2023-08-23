#include<iostream>
using namespace std;

int main(){
    char s[100];
    cin >>s;
    int i;
    for(i=0;s[i]!='\0';i++);
    i /= 2;
    cout<<s[i]<<endl;
}