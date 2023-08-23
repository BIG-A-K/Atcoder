C = set()
ans=0
for i in range(9):
    s = str(input())
    for j in range(9):
        if s[j]=='#':
            C.add((i,j))
for y1,x1 in list(C):
    for y2,x2 in list(C):
        if y1==y2 and x1==x2:continue
        xgap = x2-x1
        ygap = y2-y1
        thx = x1-ygap
        thy = y1+xgap
        fox = thx+xgap
        foy = thy+ygap
        if (thy,thx) in C and (fox,foy) in C:
            ans+=1
            # print("before" ,ans-1,"after",ans)
print(ans//)
        