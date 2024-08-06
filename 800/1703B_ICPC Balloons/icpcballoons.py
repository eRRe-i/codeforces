n = int(input())

for i in range(n):
    n = int(input())
    s = input()
    s = [*s]
    s2 = ""

    count = 0
    for k in s:
        
        if(k not in s2):
            count = count + 1
            s2 = s2 + k

        count = count + 1

    print(count)