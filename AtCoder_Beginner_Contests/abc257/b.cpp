#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<bool> sq(n,false);
    vector<int> a(k),l(q);
    for(int i=0;i<k;i++){
        cin>>a[i];
        sq[a[i]-1]=true;
    }
    for(int i=0;i<q;i++){
        cin>>l[i];
    }

    for(int i=0;i<q;i++){
        int p=0;
        for(int j=0,count=0;j<n;j++){
            if(sq[j]){
                count++;
            }
            if(count==l[i]){
                p=j;
                break;
            }
        }
        if(p==n-1){
            continue;
        }
        else if(sq[p+1]){
            continue;
        }
        else{
            sq[p]=false;
            sq[p+1]=true;
        }
    }

     for(int i=0;i<n;i++){
        if(sq[i]){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    return 0;   
}