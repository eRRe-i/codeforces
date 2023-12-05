n = int(input())

for i in range(n):

    v = [int(x) for x in input().split()]

    if(v[0] + v[1] == v[2]):
        print("+")
    else:
        print("-")
