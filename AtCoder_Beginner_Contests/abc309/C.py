N,K = map(int,input().split())
a = []
b = []

for i in range(N):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

med = dict(zip(a,b))
med = (sorted(med.items()))
med = [list(x) for x in med]


for id in reversed(range(len(med))):
    if id == len(med)-1:
        continue
    else:
        med[id][1] += med[id+1][1]

a = sorted(a)

if med[0][1] <= K:
    print(1)
    exit()


for id in range(len(med)):
    if med[id][1] <= K:
        print(med[id-1][0] + 1)
        exit()

print(med[-1][0]+1)
