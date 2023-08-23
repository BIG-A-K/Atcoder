#include<iostream>
#include<vector>
using namespace std;

int abs(int a){
    if (a<0){
        a*=-1;
    }
    return a;
}

bool can_I_go(int x1,int x2,int y1,int y2,int t1,int t2){
    int passes=0;
    int t=t2-t1;
    passes+=abs(x2-x1);
    passes+=abs(y2-y1);
    if(passes>t){
        return false;
    }
    else if((passes-t)%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int N;
    cin >>N;
    vector<int> x(N+1),y(N+1),t(N+1);
    x.at(0)=0;
    y.at(0)=0;
    t.at(0)=0;
    for(int i=1;i<N+1;i++){
        cin>>t.at(i)>>x.at(i)>>y.at(i);
    }
    for(int i=0;i<N;i++){
        if(can_I_go(x.at(i),x.at(i+1),y.at(i),y.at(i+1),t.at(i),t.at(i+1))){
            continue;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}