for _ in range(int(input())):
    x,a,b = map(int,input().split())
    if (a*1) + (b*2) >= x:
        print('Qualify')
    else:
        print('NotQualify')
