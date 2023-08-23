#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string S;
    string t[]={"dream","dreamer","erase","eraser"};
    cin>>S;
    vector<bool> dp(S.size()+1);
    // for(int i=0;i<S.size();i++){
    //     if(dp.at(i)){
    //         cout<<"true"<<endl;
    //     }
    // }
    dp.at(0)=true;
    for(int i=0;i<S.size();i++){
        if(dp.at(i)){
               for(int j=0;j<4;j++){
                   if(S.substr(i,t[j].size())==t[j]){
                       dp.at(i+t[j].size())=true;
                   }
               }
        }
        else{
            continue;
        }
    }
    if(dp.at(S.size())){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}