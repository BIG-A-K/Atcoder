N = int(input())
A = []
B = []
d = {}
for i in range(N):
    a,b = map(int,input().split())
    A.append(a)
    B.append(b)
    rate = a*10**20//(a+b)
    d[i+1] = rate

d = dict(sorted(d.items(),key=lambda x:x[1],reverse=True))
print(*d.keys())