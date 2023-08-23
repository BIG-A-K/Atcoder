N = int(input())
S = list(input() for _ in range(N))

for i in range(N):
    for j in range(N):
        if i == j:
            continue
        else:
            tmp = S[i] + S[j]
            if tmp == tmp[::-1]:
                print('Yes')
                exit()

print('No')