#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<int> a(n),b(n),sum(n);//a:math,b:eng
    vector<bool> student(n,false);
    set<int> ms,es,ss;
    for(int i =0;i<n;i++){
        cin>>a[i];
        ms.insert(a[i]);
    }
    for(int i =0;i<n;i++){
        cin>>b[i];
        es.insert(b[i]);
        sum[i] = a[i]+b[i];
        ss.insert(sum[i]);
    }
    int count = 0;
    for(auto tmp:ms){
        for(int i = 0; i<n;i++){
            if(count<x && a[i]==tmp){
                count++;
                student[i]=true;
            }
        }
        if(count>=x){
            break;
        }
    }
     for(int i=0;i<n;i++){
        if(student[i]){
            cout<<a[i]<<endl;
        }
    }

    count = 0;
    for(auto tmp:es){
        for(int i = 0; i<n;i++){
            if(count<y && !student[i] && b[i]==tmp){
                count++;
                student[i]=true;
            }
        }
        if(count>=y){
            break;
        }
    }
    count = 0;
    for(auto tmp:ss){
        for(int i = 0; i<n;i++){
            if(count<z && !student[i] && sum[i]==tmp){
                count++;
                student[i]=true;
            }
        }
        if(count>=z){
            break;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(student[i]){
    //         cout<<i<<endl;
    //     }
    // }
}