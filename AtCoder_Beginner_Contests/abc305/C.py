H,W = map(int,input().split())
S = [list(input())for _ in range(H)]
for i in range(0,H):
    for j in range(0,W):
        if S[i][j] == '.':
            tmp = 0
            if i - 1 >= 0 and S[i-1][j] == '#':
                tmp += 1
            if i + 1 < H and S[i + 1][j] == '#':
                tmp += 1
            if j - 1 >= 0 and S[i][j - 1] == '#':
                tmp += 1
            if j + 1 < W and S[i][j + 1] == '#':
                tmp += 1
            if tmp >= 2:
                print(i+1,j+1)
                exit()
