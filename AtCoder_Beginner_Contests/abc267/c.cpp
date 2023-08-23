#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int M,N;
    cin>>N>>M;
    vector<ll int> A(N);
    cin>>A[0];
    ll int max = A[0];
    int idx = 0;
    for(int i=1;i<N;i++){
        cin>>A[i];
        if(max<A[i]){
            max = A[i];
            idx = i;
        }
    }
    ll int sum = 0;
    int low=idx-M;
    int i=idx;
    while(M>0){
        sum +=(M--)*A[i--];
    }
    cout<<sum<<endl;
}