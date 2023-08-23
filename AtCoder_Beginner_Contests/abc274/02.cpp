#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
using namespace std;

int main(){
    int i,j;
    int h,w;
    cin>>h>>w;
    vector<int> c(w,0);
    for(i=0;i<h;i++){
        for(j=0;j<w;++j){
            char tmp;
            cin>>tmp;
            if(tmp == '.'){
                continue;
            }
            else if(tmp == '#'){
                c[j]++;
            }
        }
    }
    for(i=0;i<w;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}
