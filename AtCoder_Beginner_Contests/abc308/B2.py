from collections import defaultdict
N,M  = map(int,input().split())
C = list((input().split()))
D = list(map(str,input().split()))
P = list(map(int,input().split()))
d = defaultdict(lambda:P[0])

for i in range(len(D)):
    d[D[i]] = P[i+1]

ans = 0
for c in C:
    ans += d[c]

print(ans)
