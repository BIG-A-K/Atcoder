#include<vector>
#include<iostream>
// #include<utility>
using namespace std;

class Sort{
    public:
        // Utilityを使えば宣言しなくても良い。
        void swap(int *a,int *b){
            int t=*a;
            *a=*b;
            *b=t;
        }
        void linersort(int a[]){
            for(int i=0;i<sizeof(a);i++){
                for(int j=i+1;j<sizeof(a);j++){
                    if(a[j]<a[i]){
                        swap(&a[i],&a[j]);
                    }
                }
            }
        }
};