#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define Yes() cout<<"Yes"<<endl
#define No() cout<<"No"<<endl
using namespace std;

class UnionFind
{
public:
    UnionFind() = default;

    explicit UnionFind(size_t n)
        : stsOrSize(n, -1) {}

    int find(int i)
    {
        if (stsOrSize[i] < 0)
        {
            return i;
        }

        // 経路圧縮
        return (stsOrSize[i] = find(stsOrSize[i]));
    }

    void merge(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a != b)
        {
            // union by size (小さいほうが子になる）
            if (-stsOrSize[a] < -stsOrSize[b])
            {
                swap(a, b);
            }

            stsOrSize[a] += stsOrSize[b];
            stsOrSize[b] = a;
        }
    }

    bool connected(int a, int b)
    {
        return (find(a) == find(b));
    }

    int size(int i)
    {
        return -stsOrSize[find(i)];
    }

private:
    // stsOrSize[i] は i の 親,
    // ただし root の場合は (-1 * そのグループに属する要素数)
    vector<int> stsOrSize;
};

int main(){
    int N,M;
    bool can = true;
    cin>>N>>M;
    UnionFind uf(N);
    rep(i,M){
        int u,v;
        cin>>u>>v;
        uf.merge(u-1,v-1);
    }
    int K;
    cin>>K;
    set<pair<int,int>> st;
    rep(i,K){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(uf.connected(x,y)){
            can = false;
            // test("hoge");
        }
        st.emplace(make_pair(uf.find(x), uf.find(y)));
        st.emplace(make_pair(uf.find(y), uf.find(x)));
    }
    int Q;
    cin>>Q;
    rep(i,Q){
        int u,v;
        cin>>u>>v;
        if(!can){No();continue;}
        u--;v--;
        int x = uf.find(u);
        int y = uf.find(v);
        if(st.find(make_pair(x,y)) != st.end()){
            No();
        }
        else{
            Yes();
        }

    }
}
