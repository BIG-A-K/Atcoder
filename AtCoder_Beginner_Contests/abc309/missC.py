N,K = map(int,input().split())
a = []
b = []
for i in range(N):
    x,y = map(int,input().split())
    a.append(x)
    b.append(y)

d1 = dict(zip(a,b))
d1 = dict(sorted(d1.items()))

before = 0
l = []
l2=[]

for id,day in enumerate(reversed(d1)):
    if id == 0:
        before = d1[day]
    else:
        d1[day] += before
        before = d1[day]
        
for day in d1:
    l.append(day)
    l2.append(d1[day])

for id in range(len(l2)):
    if l2[id] <= K:
        if id != 0:
            print(l[id-1]+1)
        else:
            print(l[0])
        exit()
print(l[-1]+1)