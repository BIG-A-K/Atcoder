S = list(map(int,input().split()))

def is_sorted(lst):
    return all(lst[i] <= lst[i + 1] for i in range(len(lst) - 1))

if not is_sorted(S):
    print("No")
    exit()

for i in S:
    if 100 <= i <= 675 and i % 25 == 0:
        continue
    else:
        print("No")
        exit()
print("Yes")