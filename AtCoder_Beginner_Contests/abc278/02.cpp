#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
using namespace std;

int main(){
    int H,M;
    cin>>H>>M;
    char h[2],m[2];
    bool mh=false,mm=false;//見間違いうるかどうか。
    h[0]=H/10+'0';
    h[1]=H%10+'0';
    m[0]=M/10+'0';
    m[1]=M%10+'0';

    while(1){
        if(h[0]=='0'){
            if(m[0]!=0){mh=true;}
        }
        else if(h[0]=='1'){
            mh=true;
        }
        else{
            if(m[0]>='0'&&m[0]<='3'){
                mh=true;
            }
        }
        if(h[1]>='0'&&h[1]<='5'){
            mm=true;
        }
        if(mh&&mm){
            break;
        }
        else{
            m[1]++;
            if(m[1]>'9'){
                m[1]='0';
                m[0]++;
                if(m[0]>'5'){
                    h[1]++;
                    m[0]='0';
                    if(h[0]=='2'&&h[1]>'3'){
                        m[0]='0';
                        m[1]='0';
                        h[0]='0';
                        h[1]='0';
                    }
                    else if(h[1]>'9'){
                        h[1]='0';
                        h[0]++;
                    }
                }
            }
        }
    }
    if(h[0]!='0'){
        cout<<h[0];
    }
    cout<<h[1]<<" ";
    if(m[0]!='0'){
        cout<<m[0];
    }
    cout<<m[1]<<endl;
}

