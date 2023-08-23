#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]=='1'){
        cout<<"No"<<endl;
        return 0;
    }
    bool line[7];
    line[0]=s[6]-'0';
    line[1]=s[3]-'0';
    line[2]=(s[7]-'0')||(s[1]-'0');
    line[3]=(s[4]-'0')||(s[0]-'0');
    line[4]=(s[8]-'0')||(s[2]-'0');
    line[5]=s[5]-'0';
    line[6]=s[9]-'0';
    bool tmp[3];
    for(int i=0;i<3;i++){
        tmp[i]=false;
    }
    // for(int i=0;i<7;i++){
    //     cout<<line[i];
    // }
    // cout<<endl;
    int i,j,k;
    for(i=0;i<7;i++){
        if(line[i]){
            tmp[0]=true;
            break;
        }
    }
    for(j=i+1;j<7;j++){
        if(!line[j]){
            tmp[1]=true;
            break;
        }
    }
    for(k=j+1;k<7;k++){
        if(line[k]){
            tmp[2]=true;
            break;
        }
    }
    if(tmp[0]&&tmp[1]&&tmp[2]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
