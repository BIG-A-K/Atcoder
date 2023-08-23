#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    char s[100];
    int count=1;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='+'){
            count++;
        }
        if(s[i]=='-'){
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}