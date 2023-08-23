#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    int N;
    cin>>N;
    set<ll int> even;
    set<ll int> odd;
    for(i=0;i<N;++i){
        int tmp;
        cin>>tmp;
        if(tmp%2==1){
            odd.insert(tmp);
        }
        else{
            even.insert(tmp);
        }
    }

    if(even.size()<2&&odd.size()<2){
        cout<<-1<<endl;
        return 0;
    }

    ll int odd_max=0,even_max=0;   
    vector<ll int> EV(even.size());
    vector<ll int> OV(odd.size());

    if(odd.size()>=2){
        for(auto t:odd){
            OV.push_back(t);
        }
        odd_max+=*(OV.cend()-1);
        odd_max+=*(OV.cend()-2);
    }
    if(even.size()>=2){
        for(auto t:even){
            EV.push_back(t);
        }
        even_max+=*(EV.cend()-1);
        even_max+=*(EV.cend()-2);
    }
    // cout<<odd_max<<"\n"<<even_max<<endl;
    ll int ans;
    ans= max(even_max,odd_max);
    cout<<ans<<endl;
}
