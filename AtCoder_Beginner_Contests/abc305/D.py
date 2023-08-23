N = int(input())
A = list(int(input()))
Q = int(input())

# fA[i]:= A[i]の時点でどれだけ眠っていたか
fA = [0]
for i in range(0,len(A)):
    if i % 2 == 0:
        fA.append(fA[-1] + A[i] - A[i - 1])
    else:
        fA.append(fA[-1])

from bisect import bisect , bisect_left

for _ in range(Q):
    l,r = map(int,input().split())
    lb = bisect_left(A,l)
    lr = bisect_left(A,r)
    print(
        fA[lr] - fA[lb]
        +  
    )
