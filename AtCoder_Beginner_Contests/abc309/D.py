N1,N2,M = map(int,input().split())
edge = [[]for _ in range(N1+N2)]

for i in range(M):
    a,b = map(int,input().split())
    edge[a-1].append(b-1)
    edge[b-1].append(a-1)


# startと連結している頂点で、もっとも遠い点を探す。
visited = set()
from collections import deque
def bfs(start):
    dist = 0
    queue = deque()
    queue.append(start)
    visited.add(start)
    while len(queue) != 0:
        v = queue.popleft()
        for e in edge[v]:
            if visited.__contains__(e):
                continue
            else:
                tmp = 1
                visited.add(e)
                queue.append(e)
    return dist

print(bfs(0),bfs(N1+N2-1))