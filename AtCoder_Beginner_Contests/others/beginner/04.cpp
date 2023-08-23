#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,count=0,ope=0;
    cin>>N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
        if(A.at(i)%2){
            cout<<0<<endl;
            return 0;
        }
        else{
            while(A.at(i)%2==0){
                A.at(i)/=2;
                count++;
            }
            if(count<ope||i==0){
                ope=count;
            }
            count=0;
        }
    }
    cout<<ope<<endl;
    return 0;
}