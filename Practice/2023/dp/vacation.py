N = int(input())
A = []
B = []
C = []
for i in range(N):
    a,b,c = map(int,input().split())
    A.append(a)
    B.append(b)
    C.append(c)

dp = [[0,0,0]]

for i in range(1,N+1):
    tmp = [0,0,0]
    tmp[0] = max(dp[i-1][1] + B[i-1],dp[i-1][2] + C[i-1])
    tmp[1] = max(dp[i-1][2] + C[i-1],dp[i-1][0] + A[i-1])
    tmp[2] = max(dp[i-1][0] + A[i-1],dp[i-1][1] + B[i-1])
    dp.append(tmp)
    
print(max(dp[-1]))