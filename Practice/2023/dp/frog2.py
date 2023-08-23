N,K = map(int,input().split())
h = list(map(int,input().split()))


cost = [0]

for i in range(1,N):
    cost.append(cost[i-1] + abs(h[i-1] + h[i]))
    for j in range(1,K+1):
        if i - j >= 0:
            cost[i] = min(cost[i],cost[i-j] + abs(h[i] - h[i - j]))
            
print(cost[-1])