n = int(input())

for i in range(n):
    value = input()
    v1 = sum([int(x) for x in [*value[:3]]])
    v2 = sum([int(x) for x in [*value[3:]]])

    # print(v1, " ", v2)
    if(v1 == v2):
        print("YES")
    else:
        print("NO")
    