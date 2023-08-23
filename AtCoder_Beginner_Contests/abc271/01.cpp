#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;
    int n;   
    cin>>n;
    char ans[2];
    if(n>=16){
        ans[1]=n/16;
        ans[0]=n%16;
    }
    else{
        ans[1]=0;
        ans[0]=n;
    }
    for(i=0;i<2;++i){
        switch(ans[i]){
            case(10):{ans[i]='A';break;}
            case(11):{ans[i]='B';break;}
            case(12):{ans[i]='C';break;}
            case(13):{ans[i]='D';break;}
            case(14):{ans[i]='E';break;}
            case(15):{ans[i]='F';break;}
            default:{
                ans[i]='0'+ans[i];break;
            }
        }
    }
    for(i=1;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;
}
