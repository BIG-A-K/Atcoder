def flr(x):
    return (int)x

def f(x):
    return f(flr(x/2))+f(flr(x/3))

N=int(input())

