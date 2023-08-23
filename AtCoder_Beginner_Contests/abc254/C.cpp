#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int K;
    cin>>N>>K;
    vector<long long int> a(N),b(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    for(int i=0;i<N-K;i++){
        if(a[i]>a[i+K]){
           swap(a[i],a[i+K]);
           if(i>K){
               i-=K+1;
           }
           else{
               i=0;
           }
        }
    }
    if(equal(a.begin(),a.end(),b.begin(),b.end())){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}