#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    int MAX=0,temp=0;
    cin>>N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(A.at(i)==A.at(j)){
                count.at(i)++;
            }
        }
        if(MAX<count.at(i)){
            MAX=count.at(i);
            temp=i;
        }
    }
    cout<<A.at(temp)<<" "<<count.at(temp)<<endl;
    return 0;    
}