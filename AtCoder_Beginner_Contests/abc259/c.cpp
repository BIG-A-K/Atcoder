#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<2;i++){
        if(s[i]!=t[i]){
            cout<<"patern1"<<endl;
            cout<<"No"<<endl;
            return 0;
        }
    }
    int K = s.size();
    int L = t.size();
    for(int i=0,j=0;i<K;i++,j++){
        if()
        if(s[i]==t[j]){
            continue;
        }
        else{
            if(s[]!=s[]){
                cout << "patern2" << endl;
                cout<<i<<","<<j<<endl;
                cout << "No" << endl;
                return 0;
            }
            int tmp = j;
            while(t[j]!=t[tmp]){
                tmp++;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}