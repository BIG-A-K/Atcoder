#include<iostream>
#include<vector>
#include<string>
// #include<cstdio>
// #include<cstdlib>
// #include<map>
// #include<utility>
// #include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;    
    vector<vector<int>> S(N,vector<int>(10));
    for(int i=0;i<N;i++){
        for(int j=0;j<10;j++){
            cin>>S[i][j];
        }
    }
    int count;
    int min=0;
    return 0;
}
