#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    int temp_a,temp_b;
    cin>>N;
    vector<long long int> a(N),b(N);
    for(int i=0;i<N;i++){
        cin>>a.at(i)>>b.at(i);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(b.at(i)>b.at(j)){
                temp_a=a.at(i);
                temp_b=b.at(i);
                a.at(i)=a.at(j);
                b.at(i)=b.at(j);
                a.at(j)=temp_a;
                b.at(j)=temp_b;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<a.at(i)<<" "<<b.at(i)<<endl;
    }
    return 0;
}