#include <iostream>
#include <vector>
#include<map>
#include<unordered_map>//hashmap
#include<algorithm>
#include<cmath>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    string s[] = { "Monday",
                   "Tuesday",
                   "Wednesday",
                   "Thursday",
                   "Friday",
                   "Saturday"};
    int len =6;
    string input;
    cin>>input;
    for(int i=0;i<len;i++){
        if(input==s[i]){
            cout<<len-i-1<<endl;
        }
    }
}
