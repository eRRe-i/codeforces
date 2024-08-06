n = int(input())

for i in range(n):
    n = [int(x) for x in input().split()]
    n.sort(reverse=True)
    if(n[0] + n[1] >= 10):
        print("YES")
    else:
        print("NO")