N,W = map(int,input().split())
w = []
v = []

for i in range(N):
    x,y = map(int,input().split())
    w.append(x)
    v.append(y)

dp = [[0]*W]*N

for i in range(1,N):
    for j in range(W):
        if j - w[i] >= 0:
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] + v[i])
        else:
            dp[i][j] = dp[i-1][j]
            
print(dp)

print(dp[-1][-1])