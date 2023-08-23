#include<iostream>
using namespace std;

int main(){
    int N,A,B;
    int count=0;
    int temp=0;
    cin>>N>>A>>B;
    for(int i=1,j;i<=N;i++){
        j=i;
        while(j!=0){
            temp+=j%10;
            j/=10;
        }
        if((A<=temp)&&(temp<=B)){
            count+=i;
        }
        temp=0;
    }
    cout<<count<<endl;
    return 0;
}