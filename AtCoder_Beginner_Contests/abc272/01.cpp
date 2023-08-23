#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    int N;
    int sum=0;
    cin>>N;
    vector<int> a(N);
    for(i=0;i<N;i++){
        cin>>a[i];
        sum+=a[i];
    }    
    cout<<sum<<endl;
}
