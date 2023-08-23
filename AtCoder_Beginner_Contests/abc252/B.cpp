#include<iostream>
#include<vector>
// #include<cstdio>
// #include<cstdlib>
// #include<map>
// #include<utility>
// #include<algorithm>
using namespace std;

int main(){
    int N,K;
    int max = 0;
    cin>>N>>K;    
    if(K==N){
        cout<<"Yes"<<endl;
        return 0;
    }
    vector<int> A(N),B(K);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<K;i++){
        cin>>B[i];
    }

/*上記は読み込み*/
//最大インデックスを求める。
    for(int i=0;i<N;i++){
        if(A[max]<A[i]){
            max=i;
        }
    }
    for(int i=0;i<N;i++){
        if(A[i]==A[max]){
            for(int j=0;j<K;j++){
                if(A[i]==A[B[j]-1]){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
