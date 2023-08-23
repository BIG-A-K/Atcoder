#include<iostream>
#include<vector>
using namespace std;


int main(){
    int Q;
    cin>>Q;
    int input;
    int sp=0;
    vector<int> S(Q);
    for(int i=0;i<Q;i++){
        cin>>input;
        if(input==1){
            cin>>input;
            S[sp++]=input;
            continue;
        }
        else if(input==2){
            int input2;
            cin>>input2;
            int temp=input2;
            cin>>input2;
            for(int count=0,j=0;j<sp;j++){
                if(S[j]==temp&&count<input2){
                    S[j]=-1;
                    count++;
                }
                if(count==input2){
                    break;
                }
            }
            continue;
        }
        else if(input==3){
            int max=-1,min=1000000000;
            for(int j=0;j<sp;j++){
                if(max<S[j]){
                    max=S[j];
                }
                if(min>S[j]&&S[j]>0){
                    min=S[j];
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