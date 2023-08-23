#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    string S,T;
    cin>>S>>T;
    int N = S.size();
    for(int i=0;i<2;i++){
        if(S[i]!=T[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=0;i<N-1;i++){
        if(S[i+2]!=T[i+2]){
            if(S[i+1]==S[i]){
                string temp;
                temp.append(S[i]);
                S.insert(i,temp);
                i--;
                continue;
            }
            else{
                cout<<"No"<<endl;
                return 0;
            }
        }
        else{
            continue;
        }
    }
    cout<<"Yes"<<endl;
    return 0;

}