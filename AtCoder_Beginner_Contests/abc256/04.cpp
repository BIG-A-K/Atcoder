#include<iostream>
#include<vector>
#include<set>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> l(n),r(n);
    set<int> upper,lower;
    int tmpMin=200000,tpmMax=0;
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        lower.insert(l[i]);
        upper.insert(r[i]);
    }
    auto l_itr=lower.begin();
    auto u_itr=upper.begin();
    l_itr++;
    bool u_temp=true;
    while(l_itr!=lower.end()||u_itr!=upper.end()){
        if(*l_itr>*u_itr){
            cout<<"u"<<endl;
            if(u_temp){
                u_itr++;
                u_temp=false;
            }
            else{
                u_itr--;
                upper.erase(*u_itr);
                u_itr++;
                u_itr++;
            }
        }
        else if(*l_itr==*u_itr){
            cout<<"m"<<endl;
                auto temp=l_itr;
            lower.erase(*l_itr);
            upper.erase(*u_itr);
        }
        else{
            cout<<"l"<<endl;
             lower.erase(*l_itr);
             l_itr++;
             u_temp=true;
        }
        cout<<"hoge"<<endl;
    }
    cout<<"next"<<endl;
    while(*lower.end()>*upper.end()){
        lower.erase(*lower.end());
    }
    while(*lower.begin()>*upper.begin()){
        upper.erase(*upper.begin());
    }

    l_itr=lower.begin();
    u_itr=upper.begin();
    while(l_itr!=lower.end()&&u_itr!=upper.end()){
        cout<<*l_itr<<" "<<*u_itr<<endl;
        l_itr++;
        u_itr++;
    }
}