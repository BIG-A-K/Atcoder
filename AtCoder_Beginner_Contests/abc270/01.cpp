#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;
    int a,b;
    cin>>a>>b;
    int c = 0;
    bool q[3];
    for(i=0;i<3;i++)q[i]=false;
    switch(a){
        case(0):break;
        case(1):{q[0]=true;break;}
        case(2):{q[1]=true;break;}
        case(3):{q[0]=true;q[1]=true;break;}
        case(4):{q[2]=true;break;}
        case(5):{q[0]=true;q[2]=true;break;}
        case(6):{q[1]=true;q[2]=true;break;}
        case(7):{q[0]=true;q[1]=true;q[2]=true;break;}
        default:{return 1;}
    }
    switch(b){
        case(0):break;
        case(1):{q[0]=true;break;}
        case(2):{q[1]=true;break;}
        case(3):{q[0]=true;q[1]=true;break;}
        case(4):{q[2]=true;break;}
        case(5):{q[0]=true;q[2]=true;break;}
        case(6):{q[1]=true;q[2]=true;break;}
        case(7):{q[0]=true;q[1]=true;q[2]=true;break;}
        default:{return 1;}
    }
    if(q[0]){
        c++;
    }
    if(q[1]){
        c+=2;
    }
    if(q[2]){
        c+=4;
    }
    cout<<c<<endl;
    return 0;
}
