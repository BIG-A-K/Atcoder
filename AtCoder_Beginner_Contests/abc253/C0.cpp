#include<iostream>
#include<vector>
using namespace std;


int main(){
    int Q;
    cin>>Q;
    int input;
    int sp=0;
    int max=-1,min=1000000000;
    vector<int> S(Q);
    for(int i=0;i<Q;i++){
        cin>>input;
        if(input==1){
            cin>>S[sp++];
            continue;
        }
        else if(input==2){
            int input2;
            cin>>input2;
            int temp=input2;
            cin>>input2;
            for(int count=0,i=0;i<sp;i++){
                if(S[i]==temp&&count<input2){
                    if(max==S[i]){
                        max=-1;
                    }
                    else if(min==S[i]){
                        min=1000000000;
                    }
                    S[i]=-1;
                    count++;
                }
                if(count==input2){
                    break;
                }
            }
            continue;
        }
        else if(input==3){
            if(max!=-1&&min!=1000000000){
                cout<<max-min<<endl;
                break;
            }
            for(int i=0;i<sp;i++){
                if(max<S[i]){
                    max=S[i];
                }
                if(min>S[i]&&S[i]>0){
                    min=S[i];
                }
            }
            cout<<max-min<<endl;
            continue;
        }
        else{
        }
    }

    return 0;
}