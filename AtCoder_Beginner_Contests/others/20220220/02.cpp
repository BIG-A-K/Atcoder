#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    int ans=0;
    cin>>N;
    vector<unsigned long long int> a(N);
    if(N==1){
        cin>>a.at(0);
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<N;i++){
        cin>>a.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a.at(i)==a.at(j)){
                a.at(j)=0;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(a.at(i)!=0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}