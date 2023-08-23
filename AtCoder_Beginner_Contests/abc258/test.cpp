#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    string s= "abcdefghijklmn";
    string temp;
    int x=2;
    temp.append(s.substr(s.length()-x,x));
    temp.append(s.substr(0,s.length()-x));
    s=temp;
    cout<<s.length()<<endl;





    // vector<int> v;
    // v.push_back(40);
    // v.push_back(12);
    // v.push_back(3);
    // v.push_back(12131341);
    // v.push_back(12133);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // sort(v.begin(),v.end());
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

}