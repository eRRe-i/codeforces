n = int(input())

for i in range(n):

    v = [int(x) for x in input().split()]
    v.sort()
    
    print(v[1])