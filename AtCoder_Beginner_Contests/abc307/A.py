N = int(input())
A = list(map(int,input().split()))
B = []

for i in range(0,len(A),7):
    tmp = sum(A[i:i+7])
    B.append(tmp)

print(*B)
