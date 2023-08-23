#include <bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main(){
    int i,j;    
    int N;
    cin>>N;
    multiset<ll int> s;
    for(i=0;i<N;i++){
        ll int tmp;
        cin>>tmp;
        s.insert(tmp);
    }
    set<int> st{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    for(auto itr = st.begin(); itr != st.end(); ++itr) {
        cout << *itr << "\n";      // イテレータの指す先のデータを表示
    }
}
