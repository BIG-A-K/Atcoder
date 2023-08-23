N,M  = map(int,input().split())
C = list((input().split()))
D = list(map(str,input().split()))
P = list(map(int,input().split()))

ans = 0
for i,c in enumerate(C):
    if any((D[j] == c) for j in range(len(D))):
        for j in range(len(D)):
            if D[j] == c:
                ans += P[j+1]
    else:
        ans += P[0]

print(ans)