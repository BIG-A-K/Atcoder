#include<iostream>
#include<vector>
using namespace std;

int main(){
    int S,N;
    cin>>N>>S;
    int pattern=0;
    vector<int> A(N),P(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    for(int i=0;i<N;i++){
        cin>>P.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(S==A.at(i)+P.at(j)){
                pattern++;
            }
        }
    }
    cout<<pattern<<endl;
    return 0;
}