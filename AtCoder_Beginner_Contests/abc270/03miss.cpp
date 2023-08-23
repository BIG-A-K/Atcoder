#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;    
    int N;
    cin>>N;
    int x,y;
    cin>>x>>y;
    stack<int> t;
    int parent[N];

    for(i=0;i<N-1;++i){
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        parent[max(tmp1,tmp2)-1]=min(tmp1,tmp2)-1;
        // cout<<i<<"test"<<endl;

    }
    // cout<<"test"<<endl;
    int tmp = y-1;
    while(tmp!=x){
        t.push(tmp);
        tmp=parent[tmp];
        // cout<<"hoge"<<tmp<<endl;
    }
    t.push(x-1);
    while(!t.empty()){
        cout<<t.top()+1<<endl;
        t.pop();
    }
}
