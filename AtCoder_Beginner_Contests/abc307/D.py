N = int(input())
S = str(input())

start = []
end = []
ans =[]
for i in range(N):
    ans.append(S[i])
    if S[i] == '(':
        start.append(i)
    if S[i] == ')':
        if len(start) == 0:
            continue
        j = start.pop()
        while ans.pop() != '(':
            pass


print(''.join(str(element) for element in ans))