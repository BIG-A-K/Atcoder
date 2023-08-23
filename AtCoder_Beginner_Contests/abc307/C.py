HA,WA = map(int,input().split())
A = list(input() for _ in range(HA))

HB,WB = map(int,input().split())
B = list(input() for _ in range(HB))

HX,WX = map(int,input().split())
X = list(input() for _ in range(HX))


A_start = [0,0]

for i in range(HA):
    for j in range(WA):
        if A[i][j] == '#':
            A_start = [i,j]

# print(A_start)

B_start = [0.0]

for i in range(HB):
    for j in range(WB):
        if B[i][j] == '#':
            B_start = [i,j]


ap = [0,0]
bp = [0,0]

for i in range(HX):
    for j in range(WX):
        if X[i][j] == '#':
            # A基準
            for ax in range(A_start[0],HA):
                for ay in range(A_start[1],WA):
                    if 