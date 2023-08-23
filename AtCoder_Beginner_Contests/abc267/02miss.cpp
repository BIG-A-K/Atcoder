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
    int len = s.length();
    bool tmp = false;
    bool tmp2 = false;
    bool tmp3 = false;
    int set[7][2]={{6,-1},{3,-1},{7,1},{4,0},{8,2},{5,-1},{9,-1}};
    for(int i=0;i<7;++i){
        if(!tmp){//立っている左側の列
            for(int j=0;j<2;++j){
                int idx = set[i][j];
                if(idx<0||idx>=len)continue;
                if(s[idx]==1){
                    tmp = true;
                    break;
                }
            }
        }
        else if(!tmp2){//間の全て倒れている列
            if(s[set[i][0]]==0){
                if(set[i][1]==-1||s[set[i][1]]==0){
                    tmp2=true;
                }
            }
        }
        if(tmp&&tmp2){//右側の立っている列
            for(int j=0;j<2;++j){
                int idx = set[i][j];
                if(idx<0||idx>=len)continue;
                if(s[idx]==1){
                    tmp3 = true;
                    break;
                }
            }
        }
    }
    if(tmp3){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    cout<<tmp<<tmp2<<tmp3<<endl;
}
