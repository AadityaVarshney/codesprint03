t = int(input())
while t:
    t-=1
    n = int(input())
    st = input()
    ls = [int(i) for i in st.split(' ')]
    a = 0
    b = 0
    c = 0
    flag = 1
    for i in ls:
        if i==50:
            a+=1
        elif i==100:
            if a==0:
                flag = 0
                break
            else:
                a-=1
                b+=1
        elif i==200:
            if a==0 or b==0:
                flag = 0
                break
            else:
                a-=1
                b-=1
                c+=1
    if flag == 0:
        print('NO')
    else:
        print('YES')
        
    