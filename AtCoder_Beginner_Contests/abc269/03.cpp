#include <iostream>
#include <vector>
#include<set>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<bitset>
#include<cmath>
#include<climits> //INT_MAXやLLONG_MAXが使える。
#define pi acos(-1)
#define ll long long
using namespace std;


ll int to_decimal(const string s){
    ll int out = 0;
    int size = s.length();
    // cout<<size<<endl
    for(int i=0;i<size;i++){
        if(s[i]=='1'){
            ll int cnt =1;
            for(int j=i;j<size-1;j++){
                cnt *=2;
            }
            out +=cnt;
        }
        // cout<<cnt<<endl;
    }
    return out;
}
int main(){
    int i,j;
    ll int N;
    cin>>N;
    int many=0;
    int msb=0;
    string s = bitset<60>(N).to_string();
    for(i=0;i<60;i++){
        if(s[i]!='0'){
            msb = i;
        break;
        }
    }
    s=s.substr(msb);
    int size = s.length()-1;
    // string tmp = "00000000000000000000000000000000000000000000000000000000000";
    // string tmp = s;
    vector<string> res;//2^15
    for(i=size;i>=0;i--){
        if(s[i]=='1'){
            string tmp = s;
            for(j=i-1;j>=0;j--){
                if(tmp[j]=='1'){
                    res.push_back(tmp);
                    many++;
                    tmp[j]='0';
                    res.push_back(tmp);
                    many++;
                }
            }
            s[i]=0;
        }
    }
    set<ll int> out;
    out.insert(0);
    for(i=0;i<many;i++){
        cout<<res[i]<<endl;
        out.insert(to_decimal(res[i]));
    }
    for(ll int result:out){
        cout<<result<<endl;
    }
}

