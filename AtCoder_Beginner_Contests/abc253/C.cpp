#include<iostream>
#include<set>
using namespace std;

int main(){
    int Q;
    cin>>Q;
    multiset<int> ms;
    int q;
    while(Q--){
        cin>>q;
        if(q==1){
            int x;
            cin >> x;
            ms.insert(x);
        }
        else if(q==2){
            int x,c;
            cin>>x>>c;
            while(c--&& ms.find(x)!=ms.end()){
                ms.erase(ms.find(x));
            }
        }
        else{
            // for(int s:ms){
            //     cout<<s<<" ";
            // }
            // cout<<*ms.begin()<<" "<<*ms.rbegin()<<endl;
            // cout<<endl;
            cout<<*ms.rbegin()-*ms.begin()<<endl;
        }
    }
}