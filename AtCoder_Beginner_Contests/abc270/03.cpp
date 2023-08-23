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
    queue<int> u;

    if(x>y){
        int temp = x;
        x=y;
        y=temp;
    }
    
    int parent[N];

    for(i=0;i<N-1;++i){
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        parent[max(tmp1,tmp2)-1]=min(tmp1,tmp2)-1;
    }
    int tmp = y-1;
    t.push(y-1);
    bool need = true;
    while(tmp!=0&&tmp!=x){
        t.push(tmp+1);
        tmp = parent[tmp];
        if(tmp == x-1){
            need = false;
        }
    }
    if(need){
        tmp = x-1;
        while(tmp!=0){
               u.push(tmp+1);
               tmp = parent[tmp];
        }
    }
    if(need){
        while(!u.empty()){
            cout<<u.front()<<" ";
            u.pop();
        }
    }
    // t.push(x-1);
    while(!t.empty()){
        cout<<t.top()<<" ";
        t.pop();
    }

}
