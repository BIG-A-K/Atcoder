p,q = map(str,input().split())

S = 'A__BC___DE____F________G'

print(abs(S.find(q) - S.find(p)))