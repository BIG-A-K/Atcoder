#include<iostream>
using namespace std;

int main(){
    int N;
    int Y;
    int yukichi,ichiyou,hideyo;
    cin>>N>>Y;
    for(yukichi=0;yukichi<=N;yukichi++){
        for(ichiyou=0;ichiyou+yukichi<=N;ichiyou++){
            hideyo=N-yukichi-ichiyou;
            if(10000*yukichi+5000*ichiyou+1000*hideyo==Y){
                cout<<yukichi<<" "<<ichiyou<<" "<<hideyo<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<" "<<-1<<" "<<-1<<endl;
    return 0;
}