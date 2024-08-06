n = int(input())
for i in range(n):
    values = [int(x) for x in input().split(" ")]
    if (sum(values) ==  max(values)*2):
        print("YES")
    else:
        print("NO")