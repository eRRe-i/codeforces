n = int(input())

for i in range(n):

    a = int(input())

    v = input().split()
    v = [int(x) for x in v]

    mihai = [x for x in v if x%2 == 0]
    bianca = [x for x in v if x%2 == 1]

    if(sum(mihai) > sum(bianca)):
        print("YES")
    else:
        print("NO")