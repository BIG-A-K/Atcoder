#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    int N;
    int p=0;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    // for(int i=0;i<N;i++){
    //     cout<<a[i];
    // }
    vector<int> base(4,0);
    for(int i=0;i<N;i++){
        base[0]=1;
        for(int j=3;j>=0;j--){
            if(base[j]>0){
                if(j+a[i]>3){
                    ++p;
                }
                else{
                    base[j+a.at(i)]+=1;
                }
                base[j]-=1;
            }
        }
        // cout<<"this is test"<<endl;
        // for(int j=0;j<4;j++){
        //     cout<<base[j]<<endl;
        // }
        // cout<<p<<endl;
    }
    cout<<p<<endl;
}