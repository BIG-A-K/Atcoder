N = int(input())

a = N % 10
if 0 <= a < 3:
    print(N//10 * 10)
elif 3<= a < 8:
    print(N - a + 5)
else:
    print(N - a + 10)
