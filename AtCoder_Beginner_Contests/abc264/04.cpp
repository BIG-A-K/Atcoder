#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    int tmp;
    for(int i=0;i<=6;i++){
        switch(s[i]){
            case('a'):{s[i]='0';break;}
            case('t'):{s[i]='1';break;}
            case('c'):{s[i]='2';break;}
            case('o'):{s[i]='3';break;}
            case('d'):{s[i]='4';break;}
            case('e'):{s[i]='5';break;}
            case('r'):{s[i]='6';break;}
            default:{return 1;}
        }
    }
    do{
        for(int i=0;i<6;i++){
            if(s[i]>s[i+1]){
            count++;
            int tmp = s[i];
            s[i]=s[i+1];
            s[i+1] = tmp; 
            }
        }
        // cout<<s<<endl;
    }while(s!="0123456");
    cout<<count<<endl;
}