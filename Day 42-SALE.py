# cook your dish here
for i in range(int(input())):
        a,b,c=map(int,input().split())
        print((a+b+c)-min(a,b,c))