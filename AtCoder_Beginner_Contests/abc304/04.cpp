#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;


int binary_search(vector<int> v,int target){
    int left = 0,right = v.size();
    while (left < right){
        int mid = left + (left + right)/2;
        if(v[mid] >= target){
            right = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return left;
}


int main(){
    int W,H;
    int N;
    cin>>W>>H>>N;
    vector<int> p(N),q(N);
    rep(i,N){
        cin>>p[i]>>q[i];
    }
    int A,B;
    cin>>A;
    vector<int> a(A);
    rep(i,A){
        cin>>a[i];
    }
    cin>>B;
    vector<int> b(B);
    rep(i,B){
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    map<pair<ll,ll>,set<ll>> m;
    set<pair<ll,ll>> s;
    rep(i,N){
        int x,y;
        x = binary_search(a, p[i]);
        y = binary_search(b, q[i]);
        pair p = make_pair(x,y);
        m[p].emplace(i);
        s.emplace(p);
    }
    ll max = 0;
    ll numOfMap =0;
    ll min = INT_MAX;
    for(auto p:s){
        numOfMap ++;
        if(max < m[p].size()){
            max = m[p].size();
        }
        if(min > m[p].size()){
            min = m[p].size();
        }
    }
    if(numOfMap < (A+1)*(B+1)){
        min = 0;
    }
    cout<<min<<" "<<max<<endl;
}
