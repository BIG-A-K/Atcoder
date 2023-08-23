#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    string s[]={"dream","dreamer","erase","eraser"};
    cin>>S;
    bool Dp[100009];
    Dp[0]=true;
    for(int i=0;i<S.size();i++){
        if(!Dp[i]){
            continue;
        }
        for(int j=0;j<4;j++){
            if(S.substr(i,s[j].size())==s[j]){
                Dp[i+s[j].size()]=true;
            }
        }
    }
    if(Dp[S.size()]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}