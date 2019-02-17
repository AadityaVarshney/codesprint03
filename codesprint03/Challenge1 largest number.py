n=input()
a=[int(x) for x in input().split()]
a=[c for c in a if c!=max(a)]
if len(a)==0:
    print(-1)
else:
    print(max(a))