#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#include<climits> //INT_MAXやLLONG_MAXが使える。
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;    
    string s[10];
    int a=-1,b=10,c=-1,d=10;
    for(i=0;i<10;i++){
        cin>>s[i];
    }
    for(i=0;i<10;i++){
        if(s[i]!=".........."){
            a=i+1;
            for(j=0;j<10;j++){
                if(s[i][j]=='#'){
                    c=j+1;
                    for(j=c;j<10;++j){
                        if(s[i][j]!='#'){
                            d=j;
                            break;
                        }
                    }
                }
            }
            for(i=a;i<10;++i){
                if(s[i]==".........."){
                    b=i;
                    break;
                }
            }
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
}
