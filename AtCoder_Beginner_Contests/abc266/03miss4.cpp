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
    int i,j;
    int x[4],y[4];
    for(i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }
    // int y,x;
    // (y-y[0])*(x[2]-x[0])=(x-x[0])*(y[2]-y[0])これが境界線
    // (y-y[1])*(x[3]-x[1])=(x-x[1])*(y[3]-y[1])
    if(((y[1]-y[0])*(x[2]-x[0])-(x[1]-x[0])*(y[2]-y[0]))*((y[3]-y[0])*(x[2]-x[0])-(x[3]-x[0])*(y[2]-y[0]))<0){
        if((y[0]-y[1])*(x[3]-x[1])-(x[0]-x[1])*(y[3]-y[1])*((y[2]-y[1])*(x[3]-x[1])-(x[2]-x[1])*(y[3]-y[1]))<0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
