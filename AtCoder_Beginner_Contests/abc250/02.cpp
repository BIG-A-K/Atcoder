#include<iostream>
using namespace std;

bool change(bool BW){
    if(BW){
        return false;
    }
    else{
        return true;
    }
}


int main(){
    int N,A,B;
    cin>>N>>A>>B;
    bool BW =true;
    for(int i=0;i<N;i++){
        for(int y=0;y<A;y++){
            for(int j=0;j<N;j++,BW=change(BW)){
                for(int x=0;x<B;x++){
                    if(BW){
                    cout<<".";
                    }
                    else{
                        cout<<"#";
                    }
                }
            }
            cout<<endl;
        }
        if(N==1){
            BW=change(BW);
        }
    }
}