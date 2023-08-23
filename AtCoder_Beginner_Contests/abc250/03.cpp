#include<iostream>
#include<vector>
using namespace std;

int main(){
    long int N,Q;
    long int temp;
    cin>>N>>Q;
    vector<long int> x(Q),a(N+1);
    for(int i=0;i<Q;i++){
        cin>>x.at(i);
    }
    for(int i=1;i<N+1;i++){
        a.at(i)=i;
    }
    for(int i=0;i<Q;i++){
        for(int j=1;j<N+1;j++){
            if(a.at(j)==x.at(i)){
                if(j!=N){
                    temp=a.at(j);
                    a.at(j)=a.at(j+1);
                    a.at(j+1)=temp;
                }
                else{
                    temp=a.at(j);
                    a.at(j)=a.at(j-1);
                    a.at(j-1)=temp;
                }
                break;
            }
        }            
    }
    for(int i=1;i<N;i++){
        cout<<a.at(i)<<" ";
    }
    cout<<a.at(N)<<endl;
    return 0;
}