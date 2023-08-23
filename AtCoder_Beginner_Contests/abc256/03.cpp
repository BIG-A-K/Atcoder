#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int h[3],w[3];
    int tmp;
    int map[3][3];
    int p=0;
    for(int i=0;i<3;i++){
        cin>>h[i];
    }
    for(int i=0;i<3;i++){
        cin>>w[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map[i][j]=1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map[i][j]=+1;
            for(int s=0;s<3;s++){
                int sumofw=0;
                for(int t=0;t<3;t++){
                    sumofw+=map[s][t];
                    }
                if(w[s]==sumofw){
                    for(int x=0;x<3;x++){
                        int sumofh=0;
                        for(int y=0;y<3;y++){
                            sumofh+=map[x][y];
                        }
                        if(sumofh!=h[x]){
                            break;
                        }
                        else{
                            tmp++;
                        }
                        if(tmp==2){
                            p++;
                        }
                    }
                }
            }
        }
    }
    cout<<p<<endl;
}