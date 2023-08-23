#include<iostream>
#include<vector>
#define ll long long
using namespace std;


int main(){
    int n,k,q;
    cin>>n,k,q;
    vector<bool> map(n);
    vector<int> a(k),l(q);    
    for(int i=0;i<k;i++){
        cin>>a.at(i);
        map.at(a.at(i))=true;
    }
    for(int i=0;i<q;i++){
        cin>>l.at(i);
    }
    // for(int i=0;i<q;i++){
    //     if(l.at(i)==n-1){
    //         continue;
    //     }
    //     else if(map.at(l.at(i+1))){
    //         continue;    
    //     }
    //     else{
    //         map[l[i+1]]=true;
    //         map[l[i]]=false;
    //     }
    // }
    for(int i=0;i<n;i++){
        if(sq[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}