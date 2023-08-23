#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<int> a(n),b(n),sum(n);//a:math,b:eng
    vector<bool> student(n,false);
    vector<int> tmp(n);
    int count = 0;
    int min = 0;

    for(int i =0;i<n;i++){
        cin>>a[i];
        tmp[i] = a[i];
    }
    sort(tmp.begin(),tmp.end(),[](int a,int b){return a>b;});
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            if(a[i]==tmp[j]){
                student[i]=true;
            }
        }
    }

    for(int i =0;i<n;i++){
        cin>>b[i];
        tmp[i]=b[i];
        sum[i] = a[i]+b[i];
    }
    sort(tmp.begin(),tmp.end(),[](int a,int b){return a>b;});
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            if(!student[i]&&b[i]==tmp[j]){
                student[i]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        tmp[i]=sum[i];
    }
    sort(tmp.begin(),tmp.end(),[](int a,int b){return a>b;});
    for(int i=0;i<n;i++){
        for(int j=0;j<z;j++){
            if(!student[i]&&sum[i]==tmp[j]){
                student[i]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(student[i]){
            cout<<i<<endl;
        }
    }
}