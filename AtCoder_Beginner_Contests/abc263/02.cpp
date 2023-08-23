#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=1;i<n;i++){//1の親はないので1スタート
        cin>>p.at(i);
    }
    int k = 1;
    int parent=p.at(n-1);//PN
    while(parent != 1){
        ++k;
        parent = p.at(parent-1);
    }
    cout<<k<<endl;
}