#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    int n;
    cin>>n;    
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int parent;
    int count=1;
    cout<<0<<endl;
    for(i=2;i<=2*n+1;i++){
        parent = a[i/2-1];
        // cout<<i<<" : "<<parent<<" ";
        while(parent != 1){
            parent = a[parent/2-1];
            count++;
        }
        cout<<count<<endl;
        count=1;
    }
}
