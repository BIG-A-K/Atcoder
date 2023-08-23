#include<iostream>
#include<map>
using namespace std;

int main(){
    int Q;
    int max = -1, min = 1000000000;
    cin>>Q;
    map<int> S(Q,0);
    for(int i=0;i<Q;i++){
        cin>>input;
        if(input==1){
            cin>>input;
            map[input]++;
            if(imput>max){
                max=input;
            }
            if(input<min){
                min=input;
            }
            continue;
        }
        else if(input==2){
            int input2;
            cin>>input2;
            int temp=input2;
            cin>>input2;
            int count=0;
            while(count<input2){
                map[temp]--;
                count++;
            }
            if(map[temp]<0){
                for(int i=0;i<max;i++){}
            }
            continue;
        }
        else if(input==3){
            cout<<max-min<<endl;
            continue;
        }
        else{
        }
    }

    return 0;

}