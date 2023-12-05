n = int(input())

for i in range(n):

    a = int(input())

    v = input().split()
    v = [int(x)%2 for x in v]

    total = sum(v)

    if(total == a):
        print("Yes")
    else:
        print("No")