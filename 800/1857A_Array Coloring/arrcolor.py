n = int(input())

for i in range(n):

    a = int(input())
    v = input().split()
    v = [int(x) for x in v]

    if(sum(v)%2 == 0):
        print("YES")
    else:
        print("NO")