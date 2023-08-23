#include<iostream>
#include<vector>
using namespace std;

int main(){
    string S;
    cin>>S;
    string cmp = S;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(S[i]==S[j]){
                cmp[i]='\n';
                cmp[j]='\n';
            }
        }
    }
    for(int i=0;i<3;i++){
        if(cmp[i]!='\n'){
            cout<<S[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}