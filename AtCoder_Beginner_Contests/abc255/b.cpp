#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    vector<int> A(k);
    vector<int> x(n),y(n);
    for(int i=0;i<k;i++){
        cin >> A[i];
    }
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    double tmp_max=0;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            double temp = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            tmp_max = max(tmp_max,temp);
        }
    }
    cout<<tmp_max<<endl;
}