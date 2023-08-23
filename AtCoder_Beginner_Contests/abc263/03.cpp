#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int combination(int a,int b){
    if(b==0||b==a){
        return 1;
    }
    if(b==1){
        return a;
    }
    return combination(a-1,b-1)+combination(a-1,b);
}
void print(int a[],int n){
    for(int i = 0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
}

int main(){
    int N,M;
    cin>>N>>M;
    int a[N];
    for(int i=0;i<N;i++){
        a[i]=i+1;
    }
    print(a,N);
    while(){
        a[N-1]++;
        if(a[N-1]>M){
            
        }
    }
}