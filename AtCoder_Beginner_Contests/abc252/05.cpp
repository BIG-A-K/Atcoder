#include<iostream>
#include<vector>
#include<cstdio>
// #include<cstdlib>
// #include<map>
// #include<utility>
// #include<algorithm>
using namespace std;

int main(){
    int N,K    
    cin >>N>>K;
    vector<int> A(N),B(K);
    vevtor<bool> C(N,true);
    cin>>A[0];
    for(int i=1;i<N;i++){
        cin>>A[i];      
    }
    for(int i=0;i<K;i++){
        cin>>B[i];
        C[B[i]]=false;
    }
    int max=0;
    for(int i=0;i<N;i++){
        if(A[max]<A[i]){
            C[max]=false;
            max=i;
        }
        else{
            A[i]=false;
        }
    }
    for(int i=0;i<N;i++){
        if(A[i]==A[max]){
            if(!C[i]){
                cout<<"Yes"<<endl;
                return 0;
            }
            else{
                continue;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
