# cook your dish here
t=int(input())
for tc in range(t):
    x1,y1,x2,y2=map(int,input().split())
    if (abs(x1-x2)%2==0 and abs(y1-y2)%2==0) or (abs(x1-x2)%2!=0 and abs(y1-y2)%2!=0):
        print("yes")
    else:
        print("no")
        