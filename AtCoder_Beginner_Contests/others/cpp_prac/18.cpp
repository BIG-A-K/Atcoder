#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> A(M),B(M);
    for(int i=0;i<M;i++){
        cin>>A.at(i)>>B.at(i);
    }
    vector<vector<char>> check(N,vector<char>(N,'-'));
    for(int i=0;i<M;i++){
        A.at(i)--;
        B.at(i)--;
        check.at(A.at(i)).at(B.at(i))='o';
        check.at(B.at(i)).at(A.at(i))='x';
    }


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<check.at(i).at(j);
            if(j==(N-1)){
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }
    }
    return 0;
}


    // for(int s=0;s<M;s++){
    //     for(int i=0;i<N;i++){
    //         for(int j=0;j<N;j++){
    //             if(A.at(s)==i&&B.at(s)==j){
    //                 cout<<"o";
    //             }
    //             else if(B.at(s)==i&&A.at(s)==j){
    //                 cout<<"x";
    //             }
    //             else{
    //                 cout<<"-";
    //             }
    //             if(j==N-1){
    //                 cout<<endl;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }
    // }
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout<<"-";
    //         if(j==(N-1)){
    //             cout<<endl;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    // }