#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    int n;
    cin>>n;
    vector<ll int> h(n);    
    ll int max=0;
    int max_id=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
        if(max<h[i]){
            max=h[i];
            max_id=i;
        }
    }
    cout<<max_id+1<<endl;

}
