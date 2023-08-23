N,M = map(int,input().split())

mod = 998244353

Dp = [[0 for _ in range(N+1)]for _ in range(M+1)]

for i in range(N):
    for x in range(M):
        Dp[i+1][x] = 