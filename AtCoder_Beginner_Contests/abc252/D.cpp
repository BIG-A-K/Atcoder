#include<iostream>
#include<vector>
// #include<cstdio>
// #include<cstdlib>
// #include<map>
// #include<utility>
// #include<algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int count = 1;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]>A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=A[i];
            }
        }
    }
    int temp=0;
    for(int i=0;i<N;i++){
        if(temp!=A[i]){
            temp=A[i];
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

