#include<iostream>
#include<vector>
// #include<cstdio>
// #include<cstdlib>
// #include<map>
// #include<utility>
// #include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    int count=0;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int temp1,temp2;
    for(int i=0;i<N;i++){
        temp1=A[i];
        for(int j=i+1;j<N;j++){
            if(temp1!=A[j]){
                temp2=A[j];
                for(int k=j+1;k<N;k++){
                    if(temp1!=A[k]&&temp2!=A[k]){
                        count++;
                    }
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
