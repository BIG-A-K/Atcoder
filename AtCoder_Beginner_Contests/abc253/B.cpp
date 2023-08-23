#include<iostream>
#include<vector>
using namespace std;

int abs(int x){
    if(x<0){
        return -x;
    }
    else{
        return x;
    }
}

int main(){
    int H,W;
    int tempx=100,tempy=100;
    bool check=false;
    cin >>H>>W;
    vector<vector<char>> s(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(s[i][j]=='o'&&!check){
                tempx=i;
                tempy=j;
                check=true;
            }
            else if(s[i][j]=='o'&&check){
                cout<<abs(tempx-i)+abs(tempy-j)<<endl;
                return 0;
            }
        }
    }
    return 1;

}