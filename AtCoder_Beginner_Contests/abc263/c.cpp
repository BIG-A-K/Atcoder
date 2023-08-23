#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int N,M;

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

void make(int a[],int max,int row){
    // print(a,N);
    for(int i = 1;i<max;i++){
        a[row] = i;
        if(row == N-1){
            print(a,N);
        }
        else{
            make(a,a[row],row+1);
        }
    }
}

int main(){
    cin >>N>>M;
    int c = combination(M,N);
    int a[N];
    for(int i=0;i<N;i++){
        a[i] = -100;
    }
    make(a,M,0);
}