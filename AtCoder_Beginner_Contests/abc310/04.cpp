#include <bits/stdc++.h>
#define ll long long
#define test(i) cout<<"test: "<<i<<endl
#define rep(i,n) for(int i = 0;i < (n); i++)
#define yes() cout<<"Yes"<<endl
#define no() cout<<"No"<<endl
using namespace std;

class UnionFind
{
public:
    UnionFind() = default;

    explicit UnionFind(size_t n)
        : m_parentsOrSize(n, -1) {}

    int find(int i)
    {
        if (m_parentsOrSize[i] < 0)
        {
            return i;
        }

        // 経路圧縮
        return (m_parentsOrSize[i] = find(m_parentsOrSize[i]));
    }

    void merge(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a != b)
        {
            // union by size (小さいほうが子になる）
            if (-m_parentsOrSize[a] < -m_parentsOrSize[b])
            {
                swap(a, b);
            }

            m_parentsOrSize[a] += m_parentsOrSize[b];
            m_parentsOrSize[b] = a;
        }
    }

    bool connected(int a, int b)
    {
        return (find(a) == find(b));
    }

    int size(int i)
    {
        return -m_parentsOrSize[find(i)];
    }

private:
    // m_parentsOrSize[i] は i の 親,
    // ただし root の場合は (-1 * そのグループに属する要素数)
    vector<int> m_parentsOrSize;
};

int main(){
    int N,T,M;
    cin>>N>>T>>M;
    map<int,set<int>> hunaka;
    rep(i,M){
        int a,b;
        cin>>a>>b;
        hunaka[a].emplace(b);
        hunaka[b].emplace(a);
    }
    vector<set<int>> team(T);
    rep(i,N){
        rep(j,T){
            if()
        }        
    }
}
