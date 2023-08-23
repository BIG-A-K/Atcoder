#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    int count=1;
    cin>>N;
    vector<int> d(N);
    for(int i=0;i<N;i++){
        cin>>d.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(d.at(i)>d.at(j)){
                int temp=d.at(i);
                d.at(i)=d.at(j);
                d.at(j)=temp;
            }
        }
    }
    for(int i=0;i<N-1;i++){
        if(d.at(i)<d.at(i+1)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;   
}