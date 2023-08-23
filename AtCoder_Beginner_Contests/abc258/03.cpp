#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n;
    int q;
    string s;
    cin>>n>>q>>s;
    int query;
    int x;
    while(q--){
        cin>>query;
        cin>>x;
        if(query==1){
            // string temp;
            // temp.append(s.substr(s.length()-x,x));
            // temp.append(s.substr(0,s.length()-x));
            // s.clear();
            // s=temp;
            int temp = s.length();
            s.append(s,0,temp-x);
            // s.erase(0,temp-x);
            s=&s[temp-x];
        //     s.insert(0,s,s.length()-x);
        //     s.erase(s.length()-x,x);
        // cout<<s<<endl;
        }
        if(query==2){
            cout<<s[x-1]<<endl;
        }
    }  
}

/*
c
u
nldsuccxul
c
lnldsuccxu
xulnldsucc
uccxulnlds
u
*/