#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;    
    int n;
    cin>>n;
    // vector<ll int> a(n);
    set<ll int> s;
    ll int a;
    int count = 0;
    for(i=0;i<n;i++){
        // cin>>a[i];
        cin>>a;
        s.insert(a);
    }
    // test(0);
    while(s.size()!=1&&j<s.size()){
        j++;
        for(auto x:s){
            s.erase(x);
            if(x==0){
                break;
            }
            // test(x);
            if(x!=1&&s.size()!=0&&x%3!=0&&x%2!=0){
                cout<<-1<<endl;
                return 0;
            }
            while(x%2==0){
                // test("kokoha2");
                x/=2;
                count++;
            }
            while(x%3==0){
                // test("kokoha3");
                x/=3;
                count++;
            }
            // test("after");
            // test(x);
            s.insert(x);
        }
    }
    // for(auto x:s){
    //     cout<<x<<endl;
    // }
    cout<<count<<endl;
}
