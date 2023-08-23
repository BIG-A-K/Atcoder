#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    int a_sum=0,b_sum=0;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>>a.at(i);
    }
    for(int temp,i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a.at(i)<a.at(j)){
                temp=a.at(i);
                a.at(i)=a.at(j);
                a.at(j)=temp;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(i%2==0){
            a_sum+=a.at(i);
        }
        else{
            b_sum+=a.at(i);
        }
    }
    cout<<a_sum-b_sum<<endl;
    return 0;
}