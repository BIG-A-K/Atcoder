#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

int main(){
    int N;
    string S;
    int Q;
    cin>>N;
    cin>>S;
    cin>>Q;
    set<int> id;
    set<int> changed;
    map<int,char> mp;
    bool BIG = false;
    bool small = false;
    rep(i,Q){
        int t,x;
        char c;
        cin>>t>>x>>c;
        if(t == 1){
            id.emplace(x-1);//-1しろ
            mp[x-1] = c;
        }
        else if(t == 2){
            changed.merge(id);
            id.clear();
            BIG = false;
            small = true;
            
        }
        else if(t == 3){
            changed.merge(id);
            id.clear();
            BIG = true;
            small = false;
        }
    }
    
    for(auto i:changed){
        S[i] = mp[i];
    }
    if(BIG){
        rep(i,N){
            if(id.find(i)!=id.end()){
                cout<<mp[i];
            }
            else{
                if(S[i] <= 'Z'){
                    printf("%c",S[i]);
                }
                else{
                    printf("%c",S[i] - 'a' + 'A');
                }
            }
        }
    }
    else if(small){
        rep(i,N){
            if(id.find(i)!=id.end()){
                printf("%c",mp[i]);
            }
            else{
                if(S[i] <= 'Z'){
                    printf("%c",S[i] + 'a' - 'A');
                }
                else{
                    printf("%c",S[i]);
                }
            }
        }
    }
    else{
        rep(i,N){
            if(id.find(i) == id.end()){
                printf("%c",S[i]);
            }
            else{
                cout<<mp[i];
            }
        }
    }
    cout<<endl;
}
