#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;    
    int n;
    cin>>n;
    vector<int> p(n);
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    prev_permutation(p.begin(),p.end());
    for(auto it:p){
        cout<<it<<" ";
    }
    cout<<endl;
}
